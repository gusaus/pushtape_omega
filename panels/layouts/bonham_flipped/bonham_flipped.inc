<?php
// Plugin definition
$plugin = array(
  'title' => t('Bonham Flipped'),
  'icon' => 'bonham-flipped.png',
  'category' => t('Pushtape'),
  'theme' => 'bonham_flipped',
  'css' => 'css/layouts/bonham-flipped/bonham-flipped.layout.css',
  'regions' => array(
    'header' => t('Header'),
    'sidebar' => t('Content Sidebar'),
    'contentmain' => t('Content'),
  ),
);
