# UA Zen #

The UA Zen theme is a Drupal subtheme of Zen using the UA's new branding guidelines.
It incorporates the the UA Bootstrap framework to provide lots of helpful classes for designers and developers.

## Dependencies

UA Zen uses the [UA Bootstrap](http://uadigital.arizona.edu/ua-bootstrap) front-end framework which requires jQuery version 1.9 or higher.  The recommended method for enabling a newer version of jQuery for Drupal is to install and enable the [jQuery Update](https://www.drupal.org/project/jquery_update) module.  If you don't want to use jQuery Update, and are able to meet the jQuery dependency another way, you can manually supress the jQuery version warning message within the theme settings.

## Development Information

### SASS/Compass

UA Zen uses SASS and the Compass SASS framework.  Currently, both the source .scss files and the compiled .css files are kept in version control and included in released/packaged versions of UA Zen.  If the generation of compiled CSS files can be sufficiently automated for packaging/distrubtion, the compiled css files may be eventually removed from version control.

#### Compiling SASS
In order to simplify commit diffs and pull requests, UA Zen maintainers should be sure to set the Compass environment to "production" by using the `-e production` option when using the `compass compile` or `compass watch` commands, e.g.:

```bundle exec compass compile -e production```

or

```bundle exec compass watch -e production```

## Making a UA Zen subtheme ##

The following instructions make a new subtheme called ua_zen_subtheme.
Change any instance of this into whatever you want your subtheme to be called, but make sure to use underscores, not spaces or dashes.

1. Create a new directory in your sites/all/themes called ua_zen_subtheme.

2. Create a new .info file in your subtheme's folder, ua_zen_subtheme.info

3. Add the .info example below in your new .info file:

4. Create the css folder in your subtheme.

5. Create the overrides.css and place it in the css folder. Add some new styles like in the styles example below.

6. If you already have a logo for your site, place it in the subtheme's folder as `logo.png`. If not, copy the placeholder from ua_zen.

.info Example:

    name = UA Zen Subtheme
    description = The University of Arizona's official sub-theme for UA Zen. Make all of your changes in this theme so that you can update to the latest UAZen.
    core = 7.x
    base theme = ua_zen

    ; Optionally add some Javacript files to your theme.
    ; scripts[] = js/script.js

    ; Optionally add an overrides file.
    stylesheets[all][] = css/overrides.css

styles Example:

    body {
      background: red;
    }
