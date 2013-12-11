<?php
// $Id: views-view-unformatted.tpl.php,v 1.6 2008/10/01 20:52:11 merlinofchaos Exp $
/**
 * @file views-view-unformatted.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

<?php
//$rand_start = rand(0, count($rows)-1);
?>

<div id="osu-feature-story" class="carousel slide">
  <!-- Carousel items -->
  <div class="carousel-inner">
    <?php foreach ($rows as $id => $row): ?>
      <?php if ($row): ?>
        <div class="fs-row views-row item<?php if($id == 0) { echo ' active'; } ?>">
          <?php echo $row; ?>
        </div>
      <?php endif; ?>
    <?php endforeach; ?>
  </div>
  <!-- Carousel nav -->
  <?php if ( count($rows) > 1 ) { // Only print arrows if we have more than 1 feature story ?>
    <a class="carousel-control left" href="#osu-feature-story" data-slide="prev">&lsaquo;</a>
    <a class="carousel-control right" href="#osu-feature-story" data-slide="next">&rsaquo;</a>
  <?php } ?>
</div>