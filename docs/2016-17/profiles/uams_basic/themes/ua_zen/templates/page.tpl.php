<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>
<?php if (!empty($page['alert'])) : ?>
<section class="container">
    <div class="row">
        <div class="col-xs-12">
            <?php print render($page['alert']); ?>
        </div>
    </div>
</section>
<?php endif; // End alert ?>
<?php // Defined in template file: region--header-ua.tpl.php. ?>
<?php if (!empty($page['header_ua'])) : ?>
    <?php print render($page['header_ua']); ?>
<?php endif; // End header_ua?>
<header class="header page-row" id="header_site" role="banner">
    <div class="container">
    <?php // If the logo option is on, do not display the site name and slogan. ?>
    <?php if ($logo):?>
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
    <?php endif; // End $logo ?>
    <?php if ($secondary_menu): ?> <!-- Using Secondary Menu for Utility Links -->
        <div class="header__secondary-menu" id="utility_links" role="navigation"> <!-- id was #secondary-menu -->
            <?php print theme('links__system_secondary_menu', array('links' => $secondary_menu, 'attributes' => array('id' => 'secondary-menu', 'class' => array('links', 'inline', 'clearfix')))); ?>
        </div>
    <?php endif; // End $secondary_menu ?>
    <?php if (!empty($page['header'])) : ?>
        <?php print render($page['header']); ?>
    <?php endif; // End header ?>
    </div> <!-- /.container -->

    <?php if (!empty($primary_nav) || !empty($page['navigation'])): ?>
    <div class="container">
      <nav id="main_nav" class="navbar navbar-default navbar-static-top">
          <div class="navbar-header">
            <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
              <span class="sr-only">Toggle navigation</span>
              <span class="text">MAIN MENU</span>
            </button>
          </div>
          <div id="navbar" class="navbar-collapse collapse">
            <?php if (!empty($primary_nav)): ?>
              <?php print render($primary_nav); ?>
            <?php endif; ?>
            <?php if (!empty($page['navigation'])): ?>
              <?php print render($page['navigation']); ?>
            <?php endif; ?>
          </div> <!-- /.nav-collapse-->
      </nav> <!-- /#main_nav-->
    </div> <!-- /.container -->
    <?php endif; // End primary_nav?>
</header>

<div id="main" class="page-row page-row-expanded page-row-padding-bottom">
  <?php if (!empty($page['help']) || ($messages)) : ?>
  <section class="container">
      <div class="row">
          <div class="col-xs-12">
              <?php print $messages; ?>
              <?php if (!empty($page['help'])) : ?>
              <?php print render($page['help']); ?>
              <?php endif; ?>
          </div>
      </div>
  </section>
  <?php endif; // End help ?>
  <?php if (!empty($page['content_featured'])) : ?>
  <section id="content_featured">
    <?php print render($page['content_featured']); ?>
  </section>
  <?php endif; // End content_featured ?>
    <?php if (!empty($page['highlighted'])) : ?>
    <div class="container">
        <div class="row">
            <div class="col-xs-12">
                <?php print render($page['highlighted']); ?>
            </div>
        </div>
    </div>
    <?php endif; ?>
    <div class="container">
        <div class="row">
            <article id="content" class="col-xs-12" role="main">
            <?php print $breadcrumb; ?>
            <?php if (!empty($page['content_top'])) : ?>
              <?php print render($page['content_top']); ?>
            <?php endif; ?>
            </article>
        </div>
    </div>
    <div class="container">
        <div class="row">
        <article <?php print $content_column_class; ?>>
        <a id="main-content"></a>
        <?php print render($title_prefix); ?>
        <?php if ($title): ?>
          <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php print render($tabs); ?>
        <?php if ($action_links): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
        <?php print render($page['content']); ?>
        <?php print $feed_icons; ?>
        </article>
        <?php if (!empty($page['sidebar_first']) && empty($page['sidebar_second'])): ?>
          <aside class="col-sm-3 col-sm-pull-9" role="complementary">
            <?php print render($page['sidebar_first']); ?>
          </aside>  <!-- /#sidebar-first -->
        <?php endif; ?>
        <?php if (!empty($page['sidebar_first']) && !empty($page['sidebar_second'])): ?>
          <aside class="col-sm-3 col-sm-pull-6" role="complementary">
            <?php print render($page['sidebar_first']); ?>
          </aside>  <!-- /#sidebar-first -->
        <?php endif; ?>
        <?php if (!empty($page['sidebar_second'])): ?>
          <aside <?php print $second_sidebar_column_class; ?> role="complementary">
            <?php print render($page['sidebar_second']); ?>
          </aside>  <!-- /#sidebar-second -->
        <?php endif; ?>
        </div>
    </div>
   <?php if (!empty($page['full_width_content_bottom'])) : ?>
     <?php print render($page['full_width_content_bottom']) ?>
   <?php endif; ?>
   <?php if (!empty($page['content_2_col_1']) || !empty($page['content_2_col_2'])) : ?>
    <div class="container">
        <div class="row">
           <div class="col-md-6">
               <?php print render($page['content_2_col_1']); ?>
           </div>
           <div class="col-md-6">
               <?php print render($page['content_2_col_2']); ?>
           </div>
        </div>
    </div>
   <?php endif; ?>
   <?php if (!empty($page['content_3_col_1']) || !empty($page['content_3_col_2']) || !empty($page['content_3_col_3'])) : ?>
    <div class="container">
        <div class="row">
                <div class="col-md-4">
                    <?php print render($page['content_3_col_1']); ?>
                </div>
                <div class="col-md-4">
                    <?php print render($page['content_3_col_2']); ?>
                </div>
                <div class="col-md-4">
                    <?php print render($page['content_3_col_3']); ?>
                </div>
        </div>
    </div>
    <?php endif; ?>
    <?php if (!empty($page['content_bottom'])) : ?>
    <div class="container">
        <div class="row">
        <article class="col-xs-12">
           <?php print render($page['content_bottom']); ?>
        </article>
        </div>
    </div>
   <?php endif; ?>
   <?php if (!empty($page['content_4_col_1']) || !empty($page['content_4_col_2']) || !empty($page['content_4_col_3']) || !empty($page['content_4_col_4'])) : ?>
    <div class="container">
        <div class="row">
            <div class="col-md-3">
                <?php print render($page['content_4_col_1']); ?>
            </div>
            <div class="col-md-3">
                <?php print render($page['content_4_col_2']); ?>
            </div>
            <div class="col-md-3">
                <?php print render($page['content_4_col_3']); ?>
            </div>
            <div class="col-md-3">
                <?php print render($page['content_4_col_4']); ?>
            </div>
        </div>
    </div>
     <?php endif; ?>
</div> <!-- /.main -->
<footer id="footer_site" class="<?php print $classes; ?> page-row">
  <?php print render($page['footer']); ?>
  <?php print render($page['footer_sub']); ?>
</footer>

<?php print render($page['bottom']); ?>

