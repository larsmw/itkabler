<?php
/**
 * @file
 * site_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function site_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = TRUE;
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'Europe/Berlin';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '/tmp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_site_search';
  $strongarm->value = 1;
  $export['googleanalytics_site_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_last_check';
  $strongarm->value = 1415200878;
  $export['l10n_update_last_check'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_rebuild_projects';
  $strongarm->value = 1;
  $export['l10n_update_rebuild_projects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_translation_status';
  $strongarm->value = array(
    'addressfield' => array(
      'da' => (object) array(
        'name' => 'addressfield',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-beta5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'addressfield',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1415200821,
        'last_checked' => 1415200821,
        'files' => array(
          'remote' => (object) array(
            'project' => 'addressfield',
            'langcode' => 'da',
            'version' => '7.x-1.0-beta5',
            'type' => 'remote',
            'filename' => 'addressfield-7.x-1.0-beta5.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/addressfield/addressfield-7.x-1.0-beta5.da.po',
            'timestamp' => 1391153615,
          ),
          'local' => (object) array(
            'project' => 'addressfield',
            'langcode' => 'da',
            'version' => '7.x-1.0-beta5',
            'type' => 'local',
            'filename' => 'addressfield-7.x-1.0-beta5.da.po',
            'uri' => 'translations://addressfield-7.x-1.0-beta5.da.po',
            'timestamp' => 1415200821,
            'directory' => 'translations://',
            'last_checked' => 1415200821,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
      ),
    ),
    'admin_menu' => array(
      'da' => (object) array(
        'name' => 'admin_menu',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.0-rc4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'admin_menu',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1415200823,
        'last_checked' => 1415200823,
        'files' => array(
          'remote' => (object) array(
            'project' => 'admin_menu',
            'langcode' => 'da',
            'version' => '7.x-3.0-rc4',
            'type' => 'remote',
            'filename' => 'admin_menu-7.x-3.0-rc4.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/admin_menu/admin_menu-7.x-3.0-rc4.da.po',
            'timestamp' => 1412684201,
          ),
          'local' => (object) array(
            'project' => 'admin_menu',
            'langcode' => 'da',
            'version' => '7.x-3.0-rc4',
            'type' => 'local',
            'filename' => 'admin_menu-7.x-3.0-rc4.da.po',
            'uri' => 'translations://admin_menu-7.x-3.0-rc4.da.po',
            'timestamp' => 1415200823,
            'directory' => 'translations://',
            'last_checked' => 1415200823,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'commerce' => array(
      'da' => (object) array(
        'name' => 'commerce',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.10',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'commerce',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1415200824,
        'last_checked' => 1415200829,
        'files' => array(
          'remote' => (object) array(
            'project' => 'commerce',
            'langcode' => 'da',
            'version' => '7.x-1.10',
            'type' => 'remote',
            'filename' => 'commerce-7.x-1.10.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/commerce/commerce-7.x-1.10.da.po',
            'timestamp' => 1410598815,
          ),
          'local' => (object) array(
            'project' => 'commerce',
            'langcode' => 'da',
            'version' => '7.x-1.10',
            'type' => 'local',
            'filename' => 'commerce-7.x-1.10.da.po',
            'uri' => 'translations://commerce-7.x-1.10.da.po',
            'timestamp' => 1415200824,
            'directory' => 'translations://',
            'last_checked' => 1415200829,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'commerce_ajax_cart' => array(
      'da' => (object) array(
        'name' => 'commerce_ajax_cart',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-beta3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'commerce_ajax_cart',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1415200831,
        'last_checked' => 1415200831,
        'files' => array(
          'remote' => (object) array(
            'project' => 'commerce_ajax_cart',
            'langcode' => 'da',
            'version' => '7.x-1.0-beta3',
            'type' => 'remote',
            'filename' => 'commerce_ajax_cart-7.x-1.0-beta3.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/commerce_ajax_cart/commerce_ajax_cart-7.x-1.0-beta3.da.po',
            'timestamp' => 1394567664,
          ),
          'local' => (object) array(
            'project' => 'commerce_ajax_cart',
            'langcode' => 'da',
            'version' => '7.x-1.0-beta3',
            'type' => 'local',
            'filename' => 'commerce_ajax_cart-7.x-1.0-beta3.da.po',
            'uri' => 'translations://commerce_ajax_cart-7.x-1.0-beta3.da.po',
            'timestamp' => 1415200831,
            'directory' => 'translations://',
            'last_checked' => 1415200831,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'commerce_auto_product_display' => array(
      'da' => (object) array(
        'name' => 'commerce_auto_product_display',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'commerce_auto_product_display',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1415200832,
        'last_checked' => 1415200831,
        'files' => array(
          'remote' => (object) array(
            'project' => 'commerce_auto_product_display',
            'langcode' => 'da',
            'version' => '7.x-1.4',
            'type' => 'remote',
            'filename' => 'commerce_auto_product_display-7.x-1.4.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/commerce_auto_product_display/commerce_auto_product_display-7.x-1.4.da.po',
            'timestamp' => 1357357312,
          ),
          'local' => (object) array(
            'project' => 'commerce_auto_product_display',
            'langcode' => 'da',
            'version' => '7.x-1.4',
            'type' => 'local',
            'filename' => 'commerce_auto_product_display-7.x-1.4.da.po',
            'uri' => 'translations://commerce_auto_product_display-7.x-1.4.da.po',
            'timestamp' => 1415200832,
            'directory' => 'translations://',
            'last_checked' => 1415200831,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'commerce_features' => array(
      'da' => (object) array(
        'name' => 'commerce_features',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'commerce_features',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1415200832,
        'last_checked' => 1415200832,
        'files' => array(
          'remote' => (object) array(
            'project' => 'commerce_features',
            'langcode' => 'da',
            'version' => '7.x-1.0',
            'type' => 'remote',
            'filename' => 'commerce_features-7.x-1.0.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/commerce_features/commerce_features-7.x-1.0.da.po',
            'timestamp' => 1391111910,
          ),
          'local' => (object) array(
            'project' => 'commerce_features',
            'langcode' => 'da',
            'version' => '7.x-1.0',
            'type' => 'local',
            'filename' => 'commerce_features-7.x-1.0.da.po',
            'uri' => 'translations://commerce_features-7.x-1.0.da.po',
            'timestamp' => 1415200832,
            'directory' => 'translations://',
            'last_checked' => 1415200832,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'commerce_paypal' => array(
      'da' => (object) array(
        'name' => 'commerce_paypal',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'commerce_paypal',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1415200833,
        'last_checked' => 1415200833,
        'files' => array(
          'remote' => (object) array(
            'project' => 'commerce_paypal',
            'langcode' => 'da',
            'version' => '7.x-2.3',
            'type' => 'remote',
            'filename' => 'commerce_paypal-7.x-2.3.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/commerce_paypal/commerce_paypal-7.x-2.3.da.po',
            'timestamp' => 1391264452,
          ),
          'local' => (object) array(
            'project' => 'commerce_paypal',
            'langcode' => 'da',
            'version' => '7.x-2.3',
            'type' => 'local',
            'filename' => 'commerce_paypal-7.x-2.3.da.po',
            'uri' => 'translations://commerce_paypal-7.x-2.3.da.po',
            'timestamp' => 1415200833,
            'directory' => 'translations://',
            'last_checked' => 1415200833,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'commerce_shipping' => array(
      'da' => (object) array(
        'name' => 'commerce_shipping',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'commerce_shipping',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1415200834,
        'last_checked' => 1415200833,
        'files' => array(
          'remote' => (object) array(
            'project' => 'commerce_shipping',
            'langcode' => 'da',
            'version' => '7.x-2.1',
            'type' => 'remote',
            'filename' => 'commerce_shipping-7.x-2.1.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/commerce_shipping/commerce_shipping-7.x-2.1.da.po',
            'timestamp' => 1392921787,
          ),
          'local' => (object) array(
            'project' => 'commerce_shipping',
            'langcode' => 'da',
            'version' => '7.x-2.1',
            'type' => 'local',
            'filename' => 'commerce_shipping-7.x-2.1.da.po',
            'uri' => 'translations://commerce_shipping-7.x-2.1.da.po',
            'timestamp' => 1415200834,
            'directory' => 'translations://',
            'last_checked' => 1415200833,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'ctools' => array(
      'da' => (object) array(
        'name' => 'ctools',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'ctools',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1415200835,
        'last_checked' => 1415200834,
        'files' => array(
          'remote' => (object) array(
            'project' => 'ctools',
            'langcode' => 'da',
            'version' => '7.x-1.4',
            'type' => 'remote',
            'filename' => 'ctools-7.x-1.4.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/ctools/ctools-7.x-1.4.da.po',
            'timestamp' => 1392326204,
          ),
          'local' => (object) array(
            'project' => 'ctools',
            'langcode' => 'da',
            'version' => '7.x-1.4',
            'type' => 'local',
            'filename' => 'ctools-7.x-1.4.da.po',
            'uri' => 'translations://ctools-7.x-1.4.da.po',
            'timestamp' => 1415200835,
            'directory' => 'translations://',
            'last_checked' => 1415200834,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'drupal' => array(
      'da' => (object) array(
        'name' => 'drupal',
        'project_type' => 'core',
        'core' => '7.x',
        'version' => '7.32',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'drupal',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1415200837,
        'last_checked' => 1415200857,
        'files' => array(
          'remote' => (object) array(
            'project' => 'drupal',
            'langcode' => 'da',
            'version' => '7.32',
            'type' => 'remote',
            'filename' => 'drupal-7.32.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/drupal/drupal-7.32.da.po',
            'timestamp' => 1414256032,
          ),
          'local' => (object) array(
            'project' => 'drupal',
            'langcode' => 'da',
            'version' => '7.32',
            'type' => 'local',
            'filename' => 'drupal-7.32.da.po',
            'uri' => 'translations://drupal-7.32.da.po',
            'timestamp' => 1415200837,
            'directory' => 'translations://',
            'last_checked' => 1415200857,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'entity' => array(
      'da' => (object) array(
        'name' => 'entity',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'entity',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1415200859,
        'last_checked' => 1415200858,
        'files' => array(
          'remote' => (object) array(
            'project' => 'entity',
            'langcode' => 'da',
            'version' => '7.x-1.5',
            'type' => 'remote',
            'filename' => 'entity-7.x-1.5.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/entity/entity-7.x-1.5.da.po',
            'timestamp' => 1414234817,
          ),
          'local' => (object) array(
            'project' => 'entity',
            'langcode' => 'da',
            'version' => '7.x-1.5',
            'type' => 'local',
            'filename' => 'entity-7.x-1.5.da.po',
            'uri' => 'translations://entity-7.x-1.5.da.po',
            'timestamp' => 1415200859,
            'directory' => 'translations://',
            'last_checked' => 1415200858,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'features' => array(
      'da' => (object) array(
        'name' => 'features',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'features',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1415200860,
        'last_checked' => 1415200860,
        'files' => array(
          'remote' => (object) array(
            'project' => 'features',
            'langcode' => 'da',
            'version' => '7.x-2.2',
            'type' => 'remote',
            'filename' => 'features-7.x-2.2.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/features/features-7.x-2.2.da.po',
            'timestamp' => 1412843632,
          ),
          'local' => (object) array(
            'project' => 'features',
            'langcode' => 'da',
            'version' => '7.x-2.2',
            'type' => 'local',
            'filename' => 'features-7.x-2.2.da.po',
            'uri' => 'translations://features-7.x-2.2.da.po',
            'timestamp' => 1415200860,
            'directory' => 'translations://',
            'last_checked' => 1415200860,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'feeds' => array(
      'da' => (object) array(
        'name' => 'feeds',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0-alpha8',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'feeds',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1415200861,
        'last_checked' => 1415200860,
        'files' => array(
          'remote' => (object) array(
            'project' => 'feeds',
            'langcode' => 'da',
            'version' => '7.x-2.0-alpha8',
            'type' => 'remote',
            'filename' => 'feeds-7.x-2.0-alpha8.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/feeds/feeds-7.x-2.0-alpha8.da.po',
            'timestamp' => 1412819994,
          ),
          'local' => (object) array(
            'project' => 'feeds',
            'langcode' => 'da',
            'version' => '7.x-2.0-alpha8',
            'type' => 'local',
            'filename' => 'feeds-7.x-2.0-alpha8.da.po',
            'uri' => 'translations://feeds-7.x-2.0-alpha8.da.po',
            'timestamp' => 1415200861,
            'directory' => 'translations://',
            'last_checked' => 1415200860,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'google_analytics' => array(
      'da' => (object) array(
        'name' => 'google_analytics',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'google_analytics',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1415200862,
        'last_checked' => 1415200861,
        'files' => array(
          'remote' => (object) array(
            'project' => 'google_analytics',
            'langcode' => 'da',
            'version' => '7.x-2.0',
            'type' => 'remote',
            'filename' => 'google_analytics-7.x-2.0.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/google_analytics/google_analytics-7.x-2.0.da.po',
            'timestamp' => 1407341210,
          ),
          'local' => (object) array(
            'project' => 'google_analytics',
            'langcode' => 'da',
            'version' => '7.x-2.0',
            'type' => 'local',
            'filename' => 'google_analytics-7.x-2.0.da.po',
            'uri' => 'translations://google_analytics-7.x-2.0.da.po',
            'timestamp' => 1415200862,
            'directory' => 'translations://',
            'last_checked' => 1415200861,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'honeypot' => array(
      'da' => (object) array(
        'name' => 'honeypot',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.17',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'honeypot',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1415200863,
        'last_checked' => 1415200862,
        'files' => array(
          'remote' => (object) array(
            'project' => 'honeypot',
            'langcode' => 'da',
            'version' => '7.x-1.17',
            'type' => 'remote',
            'filename' => 'honeypot-7.x-1.17.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/honeypot/honeypot-7.x-1.17.da.po',
            'timestamp' => 1401526902,
          ),
          'local' => (object) array(
            'project' => 'honeypot',
            'langcode' => 'da',
            'version' => '7.x-1.17',
            'type' => 'local',
            'filename' => 'honeypot-7.x-1.17.da.po',
            'uri' => 'translations://honeypot-7.x-1.17.da.po',
            'timestamp' => 1415200863,
            'directory' => 'translations://',
            'last_checked' => 1415200862,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'job_scheduler' => array(
      'da' => (object) array(
        'name' => 'job_scheduler',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0-alpha3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'job_scheduler',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1415200863,
        'last_checked' => 1415200863,
        'files' => array(
          'remote' => (object) array(
            'project' => 'job_scheduler',
            'langcode' => 'da',
            'version' => '7.x-2.0-alpha3',
            'type' => 'remote',
            'filename' => 'job_scheduler-7.x-2.0-alpha3.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/job_scheduler/job_scheduler-7.x-2.0-alpha3.da.po',
            'timestamp' => 1336467076,
          ),
          'local' => (object) array(
            'project' => 'job_scheduler',
            'langcode' => 'da',
            'version' => '7.x-2.0-alpha3',
            'type' => 'local',
            'filename' => 'job_scheduler-7.x-2.0-alpha3.da.po',
            'uri' => 'translations://job_scheduler-7.x-2.0-alpha3.da.po',
            'timestamp' => 1415200863,
            'directory' => 'translations://',
            'last_checked' => 1415200863,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'l10n_update' => array(
      'da' => (object) array(
        'name' => 'l10n_update',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0-rc2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'l10n_update',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1415200864,
        'last_checked' => 1415200863,
        'files' => array(
          'remote' => (object) array(
            'project' => 'l10n_update',
            'langcode' => 'da',
            'version' => '7.x-2.0-rc2',
            'type' => 'remote',
            'filename' => 'l10n_update-7.x-2.0-rc2.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/l10n_update/l10n_update-7.x-2.0-rc2.da.po',
            'timestamp' => 1414176289,
          ),
          'local' => (object) array(
            'project' => 'l10n_update',
            'langcode' => 'da',
            'version' => '7.x-2.0-rc2',
            'type' => 'local',
            'filename' => 'l10n_update-7.x-2.0-rc2.da.po',
            'uri' => 'translations://l10n_update-7.x-2.0-rc2.da.po',
            'timestamp' => 1415200864,
            'directory' => 'translations://',
            'last_checked' => 1415200863,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'linkit' => array(
      'da' => (object) array(
        'name' => 'linkit',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'linkit',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1415200865,
        'last_checked' => 1415200865,
        'files' => array(
          'remote' => (object) array(
            'project' => 'linkit',
            'langcode' => 'da',
            'version' => '7.x-3.2',
            'type' => 'remote',
            'filename' => 'linkit-7.x-3.2.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/linkit/linkit-7.x-3.2.da.po',
            'timestamp' => 1412161421,
          ),
          'local' => (object) array(
            'project' => 'linkit',
            'langcode' => 'da',
            'version' => '7.x-3.2',
            'type' => 'local',
            'filename' => 'linkit-7.x-3.2.da.po',
            'uri' => 'translations://linkit-7.x-3.2.da.po',
            'timestamp' => 1415200865,
            'directory' => 'translations://',
            'last_checked' => 1415200865,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'rules' => array(
      'da' => (object) array(
        'name' => 'rules',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.7',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'rules',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1415200866,
        'last_checked' => 1415200866,
        'files' => array(
          'remote' => (object) array(
            'project' => 'rules',
            'langcode' => 'da',
            'version' => '7.x-2.7',
            'type' => 'remote',
            'filename' => 'rules-7.x-2.7.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/rules/rules-7.x-2.7.da.po',
            'timestamp' => 1412690750,
          ),
          'local' => (object) array(
            'project' => 'rules',
            'langcode' => 'da',
            'version' => '7.x-2.7',
            'type' => 'local',
            'filename' => 'rules-7.x-2.7.da.po',
            'uri' => 'translations://rules-7.x-2.7.da.po',
            'timestamp' => 1415200866,
            'directory' => 'translations://',
            'last_checked' => 1415200866,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'simplenews' => array(
      'da' => (object) array(
        'name' => 'simplenews',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'simplenews',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1415200867,
        'last_checked' => 1415200868,
        'files' => array(
          'remote' => (object) array(
            'project' => 'simplenews',
            'langcode' => 'da',
            'version' => '7.x-1.1',
            'type' => 'remote',
            'filename' => 'simplenews-7.x-1.1.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/simplenews/simplenews-7.x-1.1.da.po',
            'timestamp' => 1412654943,
          ),
          'local' => (object) array(
            'project' => 'simplenews',
            'langcode' => 'da',
            'version' => '7.x-1.1',
            'type' => 'local',
            'filename' => 'simplenews-7.x-1.1.da.po',
            'uri' => 'translations://simplenews-7.x-1.1.da.po',
            'timestamp' => 1415200867,
            'directory' => 'translations://',
            'last_checked' => 1415200868,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'strongarm' => array(
      'da' => (object) array(
        'name' => 'strongarm',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'strongarm',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1415200869,
        'last_checked' => 1415200868,
        'files' => array(
          'remote' => (object) array(
            'project' => 'strongarm',
            'langcode' => 'da',
            'version' => '7.x-2.0',
            'type' => 'remote',
            'filename' => 'strongarm-7.x-2.0.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/strongarm/strongarm-7.x-2.0.da.po',
            'timestamp' => 1339605245,
          ),
          'local' => (object) array(
            'project' => 'strongarm',
            'langcode' => 'da',
            'version' => '7.x-2.0',
            'type' => 'local',
            'filename' => 'strongarm-7.x-2.0.da.po',
            'uri' => 'translations://strongarm-7.x-2.0.da.po',
            'timestamp' => 1415200869,
            'directory' => 'translations://',
            'last_checked' => 1415200868,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'views' => array(
      'da' => (object) array(
        'name' => 'views',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.8',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'views',
        'langcode' => 'da',
        'type' => 'current',
        'timestamp' => 1415200870,
        'last_checked' => 1415200877,
        'files' => array(
          'remote' => (object) array(
            'project' => 'views',
            'langcode' => 'da',
            'version' => '7.x-3.8',
            'type' => 'remote',
            'filename' => 'views-7.x-3.8.da.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/views/views-7.x-3.8.da.po',
            'timestamp' => 1414326295,
          ),
          'local' => (object) array(
            'project' => 'views',
            'langcode' => 'da',
            'version' => '7.x-3.8',
            'type' => 'local',
            'filename' => 'views-7.x-3.8.da.po',
            'uri' => 'translations://views-7.x-3.8.da.po',
            'timestamp' => 1415200870,
            'directory' => 'translations://',
            'last_checked' => 1415200877,
            'language' => 'da',
          ),
        ),
        'language' => 'da',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
  );
  $export['l10n_update_translation_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_count';
  $strongarm->value = 2;
  $export['language_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_default';
  $strongarm->value = (object) array(
    'language' => 'da',
    'name' => 'Danish',
    'native' => 'Dansk',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '2',
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'da',
    'weight' => '0',
    'javascript' => '4ZADdRdCJ8eDbmMEY2dmHHd0p-emdax_UCQc6J7jrB0',
  );
  $export['language_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language';
  $strongarm->value = array();
  $export['language_negotiation_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_content';
  $strongarm->value = array(
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_url';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = '';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'node';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'admin@example.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Site-Install';
  $export['site_name'] = $strongarm;

  return $export;
}
