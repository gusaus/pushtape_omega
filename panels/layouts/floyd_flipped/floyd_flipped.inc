<?php
// Plugin definition
$plugin = array(
  'title' => t('Floyd Flipped'),
  'icon' => 'floyd-flipped.png',
  'category' => t('Pushtape'),
  'theme' => 'floyd_flipped',
  'css' => 'css/layouts/floyd-flipped/floyd-flipped.layout.css',
  'regions' => array(
    'sidebar' => t('Sidebar'),
    'contentmain' => t('Content'),
  ),
);
