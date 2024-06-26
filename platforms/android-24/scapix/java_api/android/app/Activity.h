// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/ContextThemeWrapper.h>
#include <scapix/java_api/android/view/LayoutInflater_Factory2.h>
#include <scapix/java_api/android/view/Window_Callback.h>
#include <scapix/java_api/android/view/KeyEvent_Callback.h>
#include <scapix/java_api/android/view/View_OnCreateContextMenuListener.h>
#include <scapix/java_api/android/content/ComponentCallbacks2.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_ACTIVITY_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_ACTIVITY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class Activity; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::Activity>
{
	static constexpr fixed_string class_name = "android/app/Activity";
	using base_classes = std::tuple<scapix::java_api::android::view::ContextThemeWrapper, scapix::java_api::android::view::LayoutInflater_Factory2, scapix::java_api::android::view::Window_Callback, scapix::java_api::android::view::KeyEvent_Callback, scapix::java_api::android::view::View_OnCreateContextMenuListener, scapix::java_api::android::content::ComponentCallbacks2>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ACTIVITY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_ACTIVITY)
#define SCAPIX_JAVA_API_ANDROID_APP_ACTIVITY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/ActionBar.h>
#include <scapix/java_api/android/app/ActivityManager_TaskDescription.h>
#include <scapix/java_api/android/app/Application.h>
#include <scapix/java_api/android/app/Fragment.h>
#include <scapix/java_api/android/app/FragmentManager.h>
#include <scapix/java_api/android/app/LoaderManager.h>
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/app/SharedElementCallback.h>
#include <scapix/java_api/android/app/TaskStackBuilder.h>
#include <scapix/java_api/android/app/VoiceInteractor.h>
#include <scapix/java_api/android/app/assist/AssistContent.h>
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/content/IntentSender.h>
#include <scapix/java_api/android/content/SharedPreferences.h>
#include <scapix/java_api/android/content/res/Configuration.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/media/session/MediaController.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/PersistableBundle.h>
#include <scapix/java_api/android/transition/Scene.h>
#include <scapix/java_api/android/transition/TransitionManager.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/ActionMode.h>
#include <scapix/java_api/android/view/ActionMode_Callback.h>
#include <scapix/java_api/android/view/ContextMenu.h>
#include <scapix/java_api/android/view/ContextMenu_ContextMenuInfo.h>
#include <scapix/java_api/android/view/DragAndDropPermissions.h>
#include <scapix/java_api/android/view/DragEvent.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/LayoutInflater.h>
#include <scapix/java_api/android/view/Menu.h>
#include <scapix/java_api/android/view/MenuInflater.h>
#include <scapix/java_api/android/view/MenuItem.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/SearchEvent.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup_LayoutParams.h>
#include <scapix/java_api/android/view/Window.h>
#include <scapix/java_api/android/view/WindowManager.h>
#include <scapix/java_api/android/view/WindowManager_LayoutParams.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityEvent.h>
#include <scapix/java_api/android/widget/Toolbar.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/io/PrintWriter.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::Activity : public jni::object_base<"android/app/Activity",
	android::view::ContextThemeWrapper,
	android::view::LayoutInflater_Factory2,
	android::view::Window_Callback,
	android::view::KeyEvent_Callback,
	android::view::View_OnCreateContextMenuListener,
	android::content::ComponentCallbacks2>
{
public:

	static jint DEFAULT_KEYS_DIALER() { return get_static_field<"DEFAULT_KEYS_DIALER", jint>(); }
	static jint DEFAULT_KEYS_DISABLE() { return get_static_field<"DEFAULT_KEYS_DISABLE", jint>(); }
	static jint DEFAULT_KEYS_SEARCH_GLOBAL() { return get_static_field<"DEFAULT_KEYS_SEARCH_GLOBAL", jint>(); }
	static jint DEFAULT_KEYS_SEARCH_LOCAL() { return get_static_field<"DEFAULT_KEYS_SEARCH_LOCAL", jint>(); }
	static jint DEFAULT_KEYS_SHORTCUT() { return get_static_field<"DEFAULT_KEYS_SHORTCUT", jint>(); }
	static jint RESULT_CANCELED() { return get_static_field<"RESULT_CANCELED", jint>(); }
	static jint RESULT_FIRST_USER() { return get_static_field<"RESULT_FIRST_USER", jint>(); }
	static jint RESULT_OK() { return get_static_field<"RESULT_OK", jint>(); }

	static jni::ref<android::app::Activity> new_object() { return base_::new_object(); }
	jni::ref<android::content::Intent> getIntent() { return call_method<"getIntent", jni::ref<android::content::Intent>>(); }
	void setIntent(jni::ref<android::content::Intent> newIntent) { return call_method<"setIntent", void>(newIntent); }
	jni::ref<android::app::Application> getApplication() { return call_method<"getApplication", jni::ref<android::app::Application>>(); }
	jboolean isChild() { return call_method<"isChild", jboolean>(); }
	jni::ref<android::app::Activity> getParent() { return call_method<"getParent", jni::ref<android::app::Activity>>(); }
	jni::ref<android::view::WindowManager> getWindowManager() { return call_method<"getWindowManager", jni::ref<android::view::WindowManager>>(); }
	jni::ref<android::view::Window> getWindow() { return call_method<"getWindow", jni::ref<android::view::Window>>(); }
	jni::ref<android::app::LoaderManager> getLoaderManager() { return call_method<"getLoaderManager", jni::ref<android::app::LoaderManager>>(); }
	jni::ref<android::view::View> getCurrentFocus() { return call_method<"getCurrentFocus", jni::ref<android::view::View>>(); }
	void onCreate(jni::ref<android::os::Bundle> savedInstanceState, jni::ref<android::os::PersistableBundle> persistentState) { return call_method<"onCreate", void>(savedInstanceState, persistentState); }
	void onRestoreInstanceState(jni::ref<android::os::Bundle> savedInstanceState, jni::ref<android::os::PersistableBundle> persistentState) { return call_method<"onRestoreInstanceState", void>(savedInstanceState, persistentState); }
	void onPostCreate(jni::ref<android::os::Bundle> savedInstanceState, jni::ref<android::os::PersistableBundle> persistentState) { return call_method<"onPostCreate", void>(savedInstanceState, persistentState); }
	void onStateNotSaved() { return call_method<"onStateNotSaved", void>(); }
	jboolean isVoiceInteraction() { return call_method<"isVoiceInteraction", jboolean>(); }
	jboolean isVoiceInteractionRoot() { return call_method<"isVoiceInteractionRoot", jboolean>(); }
	jni::ref<android::app::VoiceInteractor> getVoiceInteractor() { return call_method<"getVoiceInteractor", jni::ref<android::app::VoiceInteractor>>(); }
	jboolean isLocalVoiceInteractionSupported() { return call_method<"isLocalVoiceInteractionSupported", jboolean>(); }
	void startLocalVoiceInteraction(jni::ref<android::os::Bundle> privateOptions) { return call_method<"startLocalVoiceInteraction", void>(privateOptions); }
	void onLocalVoiceInteractionStarted() { return call_method<"onLocalVoiceInteractionStarted", void>(); }
	void onLocalVoiceInteractionStopped() { return call_method<"onLocalVoiceInteractionStopped", void>(); }
	void stopLocalVoiceInteraction() { return call_method<"stopLocalVoiceInteraction", void>(); }
	void onSaveInstanceState(jni::ref<android::os::Bundle> outState, jni::ref<android::os::PersistableBundle> outPersistentState) { return call_method<"onSaveInstanceState", void>(outState, outPersistentState); }
	jboolean onCreateThumbnail(jni::ref<android::graphics::Bitmap> outBitmap, jni::ref<android::graphics::Canvas> canvas) { return call_method<"onCreateThumbnail", jboolean>(outBitmap, canvas); }
	jni::ref<java::lang::CharSequence> onCreateDescription() { return call_method<"onCreateDescription", jni::ref<java::lang::CharSequence>>(); }
	void onProvideAssistData(jni::ref<android::os::Bundle> data) { return call_method<"onProvideAssistData", void>(data); }
	void onProvideAssistContent(jni::ref<android::app::assist::AssistContent> outContent) { return call_method<"onProvideAssistContent", void>(outContent); }
	void requestShowKeyboardShortcuts() { return call_method<"requestShowKeyboardShortcuts", void>(); }
	void dismissKeyboardShortcutsHelper() { return call_method<"dismissKeyboardShortcutsHelper", void>(); }
	void onProvideKeyboardShortcuts(jni::ref<java::util::List> data, jni::ref<android::view::Menu> menu, jint deviceId) { return call_method<"onProvideKeyboardShortcuts", void>(data, menu, deviceId); }
	jboolean showAssist(jni::ref<android::os::Bundle> args) { return call_method<"showAssist", jboolean>(args); }
	void reportFullyDrawn() { return call_method<"reportFullyDrawn", void>(); }
	void onMultiWindowModeChanged(jboolean isInMultiWindowMode) { return call_method<"onMultiWindowModeChanged", void>(isInMultiWindowMode); }
	jboolean isInMultiWindowMode() { return call_method<"isInMultiWindowMode", jboolean>(); }
	void onPictureInPictureModeChanged(jboolean isInPictureInPictureMode) { return call_method<"onPictureInPictureModeChanged", void>(isInPictureInPictureMode); }
	jboolean isInPictureInPictureMode() { return call_method<"isInPictureInPictureMode", jboolean>(); }
	void enterPictureInPictureMode() { return call_method<"enterPictureInPictureMode", void>(); }
	void onConfigurationChanged(jni::ref<android::content::res::Configuration> newConfig) { return call_method<"onConfigurationChanged", void>(newConfig); }
	jint getChangingConfigurations() { return call_method<"getChangingConfigurations", jint>(); }
	jni::ref<java::lang::Object> getLastNonConfigurationInstance() { return call_method<"getLastNonConfigurationInstance", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> onRetainNonConfigurationInstance() { return call_method<"onRetainNonConfigurationInstance", jni::ref<java::lang::Object>>(); }
	void onLowMemory() { return call_method<"onLowMemory", void>(); }
	void onTrimMemory(jint level) { return call_method<"onTrimMemory", void>(level); }
	jni::ref<android::app::FragmentManager> getFragmentManager() { return call_method<"getFragmentManager", jni::ref<android::app::FragmentManager>>(); }
	void onAttachFragment(jni::ref<android::app::Fragment> fragment) { return call_method<"onAttachFragment", void>(fragment); }
	jni::ref<android::database::Cursor> managedQuery(jni::ref<android::net::Uri> uri, jni::ref<jni::array<java::lang::String>> projection, jni::ref<java::lang::String> selection, jni::ref<jni::array<java::lang::String>> selectionArgs, jni::ref<java::lang::String> sortOrder) { return call_method<"managedQuery", jni::ref<android::database::Cursor>>(uri, projection, selection, selectionArgs, sortOrder); }
	void startManagingCursor(jni::ref<android::database::Cursor> c) { return call_method<"startManagingCursor", void>(c); }
	void stopManagingCursor(jni::ref<android::database::Cursor> c) { return call_method<"stopManagingCursor", void>(c); }
	jni::ref<android::view::View> findViewById(jint id) { return call_method<"findViewById", jni::ref<android::view::View>>(id); }
	jni::ref<android::app::ActionBar> getActionBar() { return call_method<"getActionBar", jni::ref<android::app::ActionBar>>(); }
	void setActionBar(jni::ref<android::widget::Toolbar> toolbar) { return call_method<"setActionBar", void>(toolbar); }
	void setContentView(jint layoutResID) { return call_method<"setContentView", void>(layoutResID); }
	void setContentView(jni::ref<android::view::View> view) { return call_method<"setContentView", void>(view); }
	void setContentView(jni::ref<android::view::View> view, jni::ref<android::view::ViewGroup_LayoutParams> params) { return call_method<"setContentView", void>(view, params); }
	void addContentView(jni::ref<android::view::View> view, jni::ref<android::view::ViewGroup_LayoutParams> params) { return call_method<"addContentView", void>(view, params); }
	jni::ref<android::transition::TransitionManager> getContentTransitionManager() { return call_method<"getContentTransitionManager", jni::ref<android::transition::TransitionManager>>(); }
	void setContentTransitionManager(jni::ref<android::transition::TransitionManager> tm) { return call_method<"setContentTransitionManager", void>(tm); }
	jni::ref<android::transition::Scene> getContentScene() { return call_method<"getContentScene", jni::ref<android::transition::Scene>>(); }
	void setFinishOnTouchOutside(jboolean finish) { return call_method<"setFinishOnTouchOutside", void>(finish); }
	void setDefaultKeyMode(jint mode) { return call_method<"setDefaultKeyMode", void>(mode); }
	jboolean onKeyDown(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyDown", jboolean>(keyCode, event); }
	jboolean onKeyLongPress(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyLongPress", jboolean>(keyCode, event); }
	jboolean onKeyUp(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyUp", jboolean>(keyCode, event); }
	jboolean onKeyMultiple(jint keyCode, jint repeatCount, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyMultiple", jboolean>(keyCode, repeatCount, event); }
	void onBackPressed() { return call_method<"onBackPressed", void>(); }
	jboolean onKeyShortcut(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyShortcut", jboolean>(keyCode, event); }
	jboolean onTouchEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onTouchEvent", jboolean>(event); }
	jboolean onTrackballEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onTrackballEvent", jboolean>(event); }
	jboolean onGenericMotionEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onGenericMotionEvent", jboolean>(event); }
	void onUserInteraction() { return call_method<"onUserInteraction", void>(); }
	void onWindowAttributesChanged(jni::ref<android::view::WindowManager_LayoutParams> params) { return call_method<"onWindowAttributesChanged", void>(params); }
	void onContentChanged() { return call_method<"onContentChanged", void>(); }
	void onWindowFocusChanged(jboolean hasFocus) { return call_method<"onWindowFocusChanged", void>(hasFocus); }
	void onAttachedToWindow() { return call_method<"onAttachedToWindow", void>(); }
	void onDetachedFromWindow() { return call_method<"onDetachedFromWindow", void>(); }
	jboolean hasWindowFocus() { return call_method<"hasWindowFocus", jboolean>(); }
	jboolean dispatchKeyEvent(jni::ref<android::view::KeyEvent> event) { return call_method<"dispatchKeyEvent", jboolean>(event); }
	jboolean dispatchKeyShortcutEvent(jni::ref<android::view::KeyEvent> event) { return call_method<"dispatchKeyShortcutEvent", jboolean>(event); }
	jboolean dispatchTouchEvent(jni::ref<android::view::MotionEvent> ev) { return call_method<"dispatchTouchEvent", jboolean>(ev); }
	jboolean dispatchTrackballEvent(jni::ref<android::view::MotionEvent> ev) { return call_method<"dispatchTrackballEvent", jboolean>(ev); }
	jboolean dispatchGenericMotionEvent(jni::ref<android::view::MotionEvent> ev) { return call_method<"dispatchGenericMotionEvent", jboolean>(ev); }
	jboolean dispatchPopulateAccessibilityEvent(jni::ref<android::view::accessibility::AccessibilityEvent> event) { return call_method<"dispatchPopulateAccessibilityEvent", jboolean>(event); }
	jni::ref<android::view::View> onCreatePanelView(jint featureId) { return call_method<"onCreatePanelView", jni::ref<android::view::View>>(featureId); }
	jboolean onCreatePanelMenu(jint featureId, jni::ref<android::view::Menu> menu) { return call_method<"onCreatePanelMenu", jboolean>(featureId, menu); }
	jboolean onPreparePanel(jint featureId, jni::ref<android::view::View> view, jni::ref<android::view::Menu> menu) { return call_method<"onPreparePanel", jboolean>(featureId, view, menu); }
	jboolean onMenuOpened(jint featureId, jni::ref<android::view::Menu> menu) { return call_method<"onMenuOpened", jboolean>(featureId, menu); }
	jboolean onMenuItemSelected(jint featureId, jni::ref<android::view::MenuItem> item) { return call_method<"onMenuItemSelected", jboolean>(featureId, item); }
	void onPanelClosed(jint featureId, jni::ref<android::view::Menu> menu) { return call_method<"onPanelClosed", void>(featureId, menu); }
	void invalidateOptionsMenu() { return call_method<"invalidateOptionsMenu", void>(); }
	jboolean onCreateOptionsMenu(jni::ref<android::view::Menu> menu) { return call_method<"onCreateOptionsMenu", jboolean>(menu); }
	jboolean onPrepareOptionsMenu(jni::ref<android::view::Menu> menu) { return call_method<"onPrepareOptionsMenu", jboolean>(menu); }
	jboolean onOptionsItemSelected(jni::ref<android::view::MenuItem> item) { return call_method<"onOptionsItemSelected", jboolean>(item); }
	jboolean onNavigateUp() { return call_method<"onNavigateUp", jboolean>(); }
	jboolean onNavigateUpFromChild(jni::ref<android::app::Activity> child) { return call_method<"onNavigateUpFromChild", jboolean>(child); }
	void onCreateNavigateUpTaskStack(jni::ref<android::app::TaskStackBuilder> builder) { return call_method<"onCreateNavigateUpTaskStack", void>(builder); }
	void onPrepareNavigateUpTaskStack(jni::ref<android::app::TaskStackBuilder> builder) { return call_method<"onPrepareNavigateUpTaskStack", void>(builder); }
	void onOptionsMenuClosed(jni::ref<android::view::Menu> menu) { return call_method<"onOptionsMenuClosed", void>(menu); }
	void openOptionsMenu() { return call_method<"openOptionsMenu", void>(); }
	void closeOptionsMenu() { return call_method<"closeOptionsMenu", void>(); }
	void onCreateContextMenu(jni::ref<android::view::ContextMenu> menu, jni::ref<android::view::View> v, jni::ref<android::view::ContextMenu_ContextMenuInfo> menuInfo) { return call_method<"onCreateContextMenu", void>(menu, v, menuInfo); }
	void registerForContextMenu(jni::ref<android::view::View> view) { return call_method<"registerForContextMenu", void>(view); }
	void unregisterForContextMenu(jni::ref<android::view::View> view) { return call_method<"unregisterForContextMenu", void>(view); }
	void openContextMenu(jni::ref<android::view::View> view) { return call_method<"openContextMenu", void>(view); }
	void closeContextMenu() { return call_method<"closeContextMenu", void>(); }
	jboolean onContextItemSelected(jni::ref<android::view::MenuItem> item) { return call_method<"onContextItemSelected", jboolean>(item); }
	void onContextMenuClosed(jni::ref<android::view::Menu> menu) { return call_method<"onContextMenuClosed", void>(menu); }
	void showDialog(jint id) { return call_method<"showDialog", void>(id); }
	jboolean showDialog(jint id, jni::ref<android::os::Bundle> args) { return call_method<"showDialog", jboolean>(id, args); }
	void dismissDialog(jint id) { return call_method<"dismissDialog", void>(id); }
	void removeDialog(jint id) { return call_method<"removeDialog", void>(id); }
	jboolean onSearchRequested(jni::ref<android::view::SearchEvent> searchEvent) { return call_method<"onSearchRequested", jboolean>(searchEvent); }
	jboolean onSearchRequested() { return call_method<"onSearchRequested", jboolean>(); }
	jni::ref<android::view::SearchEvent> getSearchEvent() { return call_method<"getSearchEvent", jni::ref<android::view::SearchEvent>>(); }
	void startSearch(jni::ref<java::lang::String> initialQuery, jboolean selectInitialQuery, jni::ref<android::os::Bundle> appSearchData, jboolean globalSearch) { return call_method<"startSearch", void>(initialQuery, selectInitialQuery, appSearchData, globalSearch); }
	void triggerSearch(jni::ref<java::lang::String> query, jni::ref<android::os::Bundle> appSearchData) { return call_method<"triggerSearch", void>(query, appSearchData); }
	void takeKeyEvents(jboolean get) { return call_method<"takeKeyEvents", void>(get); }
	jboolean requestWindowFeature(jint featureId) { return call_method<"requestWindowFeature", jboolean>(featureId); }
	void setFeatureDrawableResource(jint featureId, jint resId) { return call_method<"setFeatureDrawableResource", void>(featureId, resId); }
	void setFeatureDrawableUri(jint featureId, jni::ref<android::net::Uri> uri) { return call_method<"setFeatureDrawableUri", void>(featureId, uri); }
	void setFeatureDrawable(jint featureId, jni::ref<android::graphics::drawable::Drawable> drawable) { return call_method<"setFeatureDrawable", void>(featureId, drawable); }
	void setFeatureDrawableAlpha(jint featureId, jint alpha) { return call_method<"setFeatureDrawableAlpha", void>(featureId, alpha); }
	jni::ref<android::view::LayoutInflater> getLayoutInflater() { return call_method<"getLayoutInflater", jni::ref<android::view::LayoutInflater>>(); }
	jni::ref<android::view::MenuInflater> getMenuInflater() { return call_method<"getMenuInflater", jni::ref<android::view::MenuInflater>>(); }
	void setTheme(jint resid) { return call_method<"setTheme", void>(resid); }
	void requestPermissions(jni::ref<jni::array<java::lang::String>> permissions, jint requestCode) { return call_method<"requestPermissions", void>(permissions, requestCode); }
	void onRequestPermissionsResult(jint requestCode, jni::ref<jni::array<java::lang::String>> permissions, jni::ref<jni::array<jint>> grantResults) { return call_method<"onRequestPermissionsResult", void>(requestCode, permissions, grantResults); }
	jboolean shouldShowRequestPermissionRationale(jni::ref<java::lang::String> permission) { return call_method<"shouldShowRequestPermissionRationale", jboolean>(permission); }
	void startActivityForResult(jni::ref<android::content::Intent> intent, jint requestCode) { return call_method<"startActivityForResult", void>(intent, requestCode); }
	void startActivityForResult(jni::ref<android::content::Intent> intent, jint requestCode, jni::ref<android::os::Bundle> options) { return call_method<"startActivityForResult", void>(intent, requestCode, options); }
	void startIntentSenderForResult(jni::ref<android::content::IntentSender> intent, jint requestCode, jni::ref<android::content::Intent> fillInIntent, jint flagsMask, jint flagsValues, jint extraFlags) { return call_method<"startIntentSenderForResult", void>(intent, requestCode, fillInIntent, flagsMask, flagsValues, extraFlags); }
	void startIntentSenderForResult(jni::ref<android::content::IntentSender> intent, jint requestCode, jni::ref<android::content::Intent> fillInIntent, jint flagsMask, jint flagsValues, jint extraFlags, jni::ref<android::os::Bundle> options) { return call_method<"startIntentSenderForResult", void>(intent, requestCode, fillInIntent, flagsMask, flagsValues, extraFlags, options); }
	void startActivity(jni::ref<android::content::Intent> intent) { return call_method<"startActivity", void>(intent); }
	void startActivity(jni::ref<android::content::Intent> intent, jni::ref<android::os::Bundle> options) { return call_method<"startActivity", void>(intent, options); }
	void startActivities(jni::ref<jni::array<android::content::Intent>> intents) { return call_method<"startActivities", void>(intents); }
	void startActivities(jni::ref<jni::array<android::content::Intent>> intents, jni::ref<android::os::Bundle> options) { return call_method<"startActivities", void>(intents, options); }
	void startIntentSender(jni::ref<android::content::IntentSender> intent, jni::ref<android::content::Intent> fillInIntent, jint flagsMask, jint flagsValues, jint extraFlags) { return call_method<"startIntentSender", void>(intent, fillInIntent, flagsMask, flagsValues, extraFlags); }
	void startIntentSender(jni::ref<android::content::IntentSender> intent, jni::ref<android::content::Intent> fillInIntent, jint flagsMask, jint flagsValues, jint extraFlags, jni::ref<android::os::Bundle> options) { return call_method<"startIntentSender", void>(intent, fillInIntent, flagsMask, flagsValues, extraFlags, options); }
	jboolean startActivityIfNeeded(jni::ref<android::content::Intent> intent, jint requestCode) { return call_method<"startActivityIfNeeded", jboolean>(intent, requestCode); }
	jboolean startActivityIfNeeded(jni::ref<android::content::Intent> intent, jint requestCode, jni::ref<android::os::Bundle> options) { return call_method<"startActivityIfNeeded", jboolean>(intent, requestCode, options); }
	jboolean startNextMatchingActivity(jni::ref<android::content::Intent> intent) { return call_method<"startNextMatchingActivity", jboolean>(intent); }
	jboolean startNextMatchingActivity(jni::ref<android::content::Intent> intent, jni::ref<android::os::Bundle> options) { return call_method<"startNextMatchingActivity", jboolean>(intent, options); }
	void startActivityFromChild(jni::ref<android::app::Activity> child, jni::ref<android::content::Intent> intent, jint requestCode) { return call_method<"startActivityFromChild", void>(child, intent, requestCode); }
	void startActivityFromChild(jni::ref<android::app::Activity> child, jni::ref<android::content::Intent> intent, jint requestCode, jni::ref<android::os::Bundle> options) { return call_method<"startActivityFromChild", void>(child, intent, requestCode, options); }
	void startActivityFromFragment(jni::ref<android::app::Fragment> fragment, jni::ref<android::content::Intent> intent, jint requestCode) { return call_method<"startActivityFromFragment", void>(fragment, intent, requestCode); }
	void startActivityFromFragment(jni::ref<android::app::Fragment> fragment, jni::ref<android::content::Intent> intent, jint requestCode, jni::ref<android::os::Bundle> options) { return call_method<"startActivityFromFragment", void>(fragment, intent, requestCode, options); }
	void startIntentSenderFromChild(jni::ref<android::app::Activity> child, jni::ref<android::content::IntentSender> intent, jint requestCode, jni::ref<android::content::Intent> fillInIntent, jint flagsMask, jint flagsValues, jint extraFlags) { return call_method<"startIntentSenderFromChild", void>(child, intent, requestCode, fillInIntent, flagsMask, flagsValues, extraFlags); }
	void startIntentSenderFromChild(jni::ref<android::app::Activity> child, jni::ref<android::content::IntentSender> intent, jint requestCode, jni::ref<android::content::Intent> fillInIntent, jint flagsMask, jint flagsValues, jint extraFlags, jni::ref<android::os::Bundle> options) { return call_method<"startIntentSenderFromChild", void>(child, intent, requestCode, fillInIntent, flagsMask, flagsValues, extraFlags, options); }
	void overridePendingTransition(jint enterAnim, jint exitAnim) { return call_method<"overridePendingTransition", void>(enterAnim, exitAnim); }
	void setResult(jint resultCode) { return call_method<"setResult", void>(resultCode); }
	void setResult(jint resultCode, jni::ref<android::content::Intent> data) { return call_method<"setResult", void>(resultCode, data); }
	jni::ref<android::net::Uri> getReferrer() { return call_method<"getReferrer", jni::ref<android::net::Uri>>(); }
	jni::ref<android::net::Uri> onProvideReferrer() { return call_method<"onProvideReferrer", jni::ref<android::net::Uri>>(); }
	jni::ref<java::lang::String> getCallingPackage() { return call_method<"getCallingPackage", jni::ref<java::lang::String>>(); }
	jni::ref<android::content::ComponentName> getCallingActivity() { return call_method<"getCallingActivity", jni::ref<android::content::ComponentName>>(); }
	void setVisible(jboolean visible) { return call_method<"setVisible", void>(visible); }
	jboolean isFinishing() { return call_method<"isFinishing", jboolean>(); }
	jboolean isDestroyed() { return call_method<"isDestroyed", jboolean>(); }
	jboolean isChangingConfigurations() { return call_method<"isChangingConfigurations", jboolean>(); }
	void recreate() { return call_method<"recreate", void>(); }
	void finish() { return call_method<"finish", void>(); }
	void finishAffinity() { return call_method<"finishAffinity", void>(); }
	void finishFromChild(jni::ref<android::app::Activity> child) { return call_method<"finishFromChild", void>(child); }
	void finishAfterTransition() { return call_method<"finishAfterTransition", void>(); }
	void finishActivity(jint requestCode) { return call_method<"finishActivity", void>(requestCode); }
	void finishActivityFromChild(jni::ref<android::app::Activity> child, jint requestCode) { return call_method<"finishActivityFromChild", void>(child, requestCode); }
	void finishAndRemoveTask() { return call_method<"finishAndRemoveTask", void>(); }
	jboolean releaseInstance() { return call_method<"releaseInstance", jboolean>(); }
	void onActivityReenter(jint resultCode, jni::ref<android::content::Intent> data) { return call_method<"onActivityReenter", void>(resultCode, data); }
	jni::ref<android::app::PendingIntent> createPendingResult(jint requestCode, jni::ref<android::content::Intent> data, jint flags) { return call_method<"createPendingResult", jni::ref<android::app::PendingIntent>>(requestCode, data, flags); }
	void setRequestedOrientation(jint requestedOrientation) { return call_method<"setRequestedOrientation", void>(requestedOrientation); }
	jint getRequestedOrientation() { return call_method<"getRequestedOrientation", jint>(); }
	jint getTaskId() { return call_method<"getTaskId", jint>(); }
	jboolean isTaskRoot() { return call_method<"isTaskRoot", jboolean>(); }
	jboolean moveTaskToBack(jboolean nonRoot) { return call_method<"moveTaskToBack", jboolean>(nonRoot); }
	jni::ref<java::lang::String> getLocalClassName() { return call_method<"getLocalClassName", jni::ref<java::lang::String>>(); }
	jni::ref<android::content::ComponentName> getComponentName() { return call_method<"getComponentName", jni::ref<android::content::ComponentName>>(); }
	jni::ref<android::content::SharedPreferences> getPreferences(jint mode) { return call_method<"getPreferences", jni::ref<android::content::SharedPreferences>>(mode); }
	jni::ref<java::lang::Object> getSystemService(jni::ref<java::lang::String> name) { return call_method<"getSystemService", jni::ref<java::lang::Object>>(name); }
	void setTitle(jni::ref<java::lang::CharSequence> title) { return call_method<"setTitle", void>(title); }
	void setTitle(jint titleId) { return call_method<"setTitle", void>(titleId); }
	void setTitleColor(jint textColor) { return call_method<"setTitleColor", void>(textColor); }
	jni::ref<java::lang::CharSequence> getTitle() { return call_method<"getTitle", jni::ref<java::lang::CharSequence>>(); }
	jint getTitleColor() { return call_method<"getTitleColor", jint>(); }
	void setTaskDescription(jni::ref<android::app::ActivityManager_TaskDescription> taskDescription) { return call_method<"setTaskDescription", void>(taskDescription); }
	void setProgressBarVisibility(jboolean visible) { return call_method<"setProgressBarVisibility", void>(visible); }
	void setProgressBarIndeterminateVisibility(jboolean visible) { return call_method<"setProgressBarIndeterminateVisibility", void>(visible); }
	void setProgressBarIndeterminate(jboolean indeterminate) { return call_method<"setProgressBarIndeterminate", void>(indeterminate); }
	void setProgress(jint progress) { return call_method<"setProgress", void>(progress); }
	void setSecondaryProgress(jint secondaryProgress) { return call_method<"setSecondaryProgress", void>(secondaryProgress); }
	void setVolumeControlStream(jint streamType) { return call_method<"setVolumeControlStream", void>(streamType); }
	jint getVolumeControlStream() { return call_method<"getVolumeControlStream", jint>(); }
	void setMediaController(jni::ref<android::media::session::MediaController> controller) { return call_method<"setMediaController", void>(controller); }
	jni::ref<android::media::session::MediaController> getMediaController() { return call_method<"getMediaController", jni::ref<android::media::session::MediaController>>(); }
	void runOnUiThread(jni::ref<java::lang::Runnable> action) { return call_method<"runOnUiThread", void>(action); }
	jni::ref<android::view::View> onCreateView(jni::ref<java::lang::String> name, jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return call_method<"onCreateView", jni::ref<android::view::View>>(name, context, attrs); }
	jni::ref<android::view::View> onCreateView(jni::ref<android::view::View> parent, jni::ref<java::lang::String> name, jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return call_method<"onCreateView", jni::ref<android::view::View>>(parent, name, context, attrs); }
	void dump(jni::ref<java::lang::String> prefix, jni::ref<java::io::FileDescriptor> fd, jni::ref<java::io::PrintWriter> writer, jni::ref<jni::array<java::lang::String>> args) { return call_method<"dump", void>(prefix, fd, writer, args); }
	jboolean isImmersive() { return call_method<"isImmersive", jboolean>(); }
	jboolean requestVisibleBehind(jboolean visible) { return call_method<"requestVisibleBehind", jboolean>(visible); }
	void onVisibleBehindCanceled() { return call_method<"onVisibleBehindCanceled", void>(); }
	void onEnterAnimationComplete() { return call_method<"onEnterAnimationComplete", void>(); }
	void setImmersive(jboolean i) { return call_method<"setImmersive", void>(i); }
	void setVrModeEnabled(jboolean enabled, jni::ref<android::content::ComponentName> requestedComponent) { return call_method<"setVrModeEnabled", void>(enabled, requestedComponent); }
	jni::ref<android::view::ActionMode> startActionMode(jni::ref<android::view::ActionMode_Callback> callback) { return call_method<"startActionMode", jni::ref<android::view::ActionMode>>(callback); }
	jni::ref<android::view::ActionMode> startActionMode(jni::ref<android::view::ActionMode_Callback> callback, jint type) { return call_method<"startActionMode", jni::ref<android::view::ActionMode>>(callback, type); }
	jni::ref<android::view::ActionMode> onWindowStartingActionMode(jni::ref<android::view::ActionMode_Callback> callback) { return call_method<"onWindowStartingActionMode", jni::ref<android::view::ActionMode>>(callback); }
	jni::ref<android::view::ActionMode> onWindowStartingActionMode(jni::ref<android::view::ActionMode_Callback> callback, jint type) { return call_method<"onWindowStartingActionMode", jni::ref<android::view::ActionMode>>(callback, type); }
	void onActionModeStarted(jni::ref<android::view::ActionMode> mode) { return call_method<"onActionModeStarted", void>(mode); }
	void onActionModeFinished(jni::ref<android::view::ActionMode> mode) { return call_method<"onActionModeFinished", void>(mode); }
	jboolean shouldUpRecreateTask(jni::ref<android::content::Intent> targetIntent) { return call_method<"shouldUpRecreateTask", jboolean>(targetIntent); }
	jboolean navigateUpTo(jni::ref<android::content::Intent> upIntent) { return call_method<"navigateUpTo", jboolean>(upIntent); }
	jboolean navigateUpToFromChild(jni::ref<android::app::Activity> child, jni::ref<android::content::Intent> upIntent) { return call_method<"navigateUpToFromChild", jboolean>(child, upIntent); }
	jni::ref<android::content::Intent> getParentActivityIntent() { return call_method<"getParentActivityIntent", jni::ref<android::content::Intent>>(); }
	void setEnterSharedElementCallback(jni::ref<android::app::SharedElementCallback> callback) { return call_method<"setEnterSharedElementCallback", void>(callback); }
	void setExitSharedElementCallback(jni::ref<android::app::SharedElementCallback> callback) { return call_method<"setExitSharedElementCallback", void>(callback); }
	void postponeEnterTransition() { return call_method<"postponeEnterTransition", void>(); }
	void startPostponedEnterTransition() { return call_method<"startPostponedEnterTransition", void>(); }
	jni::ref<android::view::DragAndDropPermissions> requestDragAndDropPermissions(jni::ref<android::view::DragEvent> event) { return call_method<"requestDragAndDropPermissions", jni::ref<android::view::DragAndDropPermissions>>(event); }
	void startLockTask() { return call_method<"startLockTask", void>(); }
	void stopLockTask() { return call_method<"stopLockTask", void>(); }
	void showLockTaskEscapeMessage() { return call_method<"showLockTaskEscapeMessage", void>(); }

protected:

	Activity(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ACTIVITY
