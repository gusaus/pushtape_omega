<?php
/**
 * @file
 * Template for Panopoly bowie.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display bowie clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="bowie-container bowie-content bowie-content-region panel-panel">
    <?php print $content['contentmain']; ?>
  </div>

</div><!-- /.bowie -->
