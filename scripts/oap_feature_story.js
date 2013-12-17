/* Feature Stories - rotating files/images 
 * Adding touch support (swipe left or right)
 * Depends on JQuery Mobile
 */
jQuery(document).ready(function($) {
  
  $("#osu-feature-story").swiperight(function() {
    $("#osu-feature-story").carousel('prev');
  });
  
  $("#osu-feature-story").swipeleft(function() {
    $("#osu-feature-story").carousel('next');
  });
  
  /* Auto Rotates bootstrap carousel */
  $('#osu-feature-story').carousel({
      interval: 5000
  });
  
  /* Sets each slide to the height of the largest to prevent page resize on change */
  var year = $('title').text().replace( /\D+/g, '');
  if (year < 2008) {
    $('.view-oap-feature-story').addClass('old');
    var maxHeight = Math.max.apply(null, $("#osu-feature-story .item img").map(function(index, elem){return $(elem).attr('height')}).get());
    $('#osu-feature-story .item').height(maxHeight);
  }

});