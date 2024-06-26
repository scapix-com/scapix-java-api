// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_RES_CONFIGURATION_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_RES_CONFIGURATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::res { class Configuration; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::res::Configuration>
{
	static constexpr fixed_string class_name = "android/content/res/Configuration";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_RES_CONFIGURATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_RES_CONFIGURATION)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_RES_CONFIGURATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/LocaleList.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::res::Configuration : public jni::object_base<"android/content/res/Configuration",
	java::lang::Object,
	android::os::Parcelable,
	java::lang::Comparable>
{
public:

	static jint COLOR_MODE_HDR_MASK() { return get_static_field<"COLOR_MODE_HDR_MASK", jint>(); }
	static jint COLOR_MODE_HDR_NO() { return get_static_field<"COLOR_MODE_HDR_NO", jint>(); }
	static jint COLOR_MODE_HDR_SHIFT() { return get_static_field<"COLOR_MODE_HDR_SHIFT", jint>(); }
	static jint COLOR_MODE_HDR_UNDEFINED() { return get_static_field<"COLOR_MODE_HDR_UNDEFINED", jint>(); }
	static jint COLOR_MODE_HDR_YES() { return get_static_field<"COLOR_MODE_HDR_YES", jint>(); }
	static jint COLOR_MODE_UNDEFINED() { return get_static_field<"COLOR_MODE_UNDEFINED", jint>(); }
	static jint COLOR_MODE_WIDE_COLOR_GAMUT_MASK() { return get_static_field<"COLOR_MODE_WIDE_COLOR_GAMUT_MASK", jint>(); }
	static jint COLOR_MODE_WIDE_COLOR_GAMUT_NO() { return get_static_field<"COLOR_MODE_WIDE_COLOR_GAMUT_NO", jint>(); }
	static jint COLOR_MODE_WIDE_COLOR_GAMUT_UNDEFINED() { return get_static_field<"COLOR_MODE_WIDE_COLOR_GAMUT_UNDEFINED", jint>(); }
	static jint COLOR_MODE_WIDE_COLOR_GAMUT_YES() { return get_static_field<"COLOR_MODE_WIDE_COLOR_GAMUT_YES", jint>(); }
	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint DENSITY_DPI_UNDEFINED() { return get_static_field<"DENSITY_DPI_UNDEFINED", jint>(); }
	static jint FONT_WEIGHT_ADJUSTMENT_UNDEFINED() { return get_static_field<"FONT_WEIGHT_ADJUSTMENT_UNDEFINED", jint>(); }
	static jint GRAMMATICAL_GENDER_FEMININE() { return get_static_field<"GRAMMATICAL_GENDER_FEMININE", jint>(); }
	static jint GRAMMATICAL_GENDER_MASCULINE() { return get_static_field<"GRAMMATICAL_GENDER_MASCULINE", jint>(); }
	static jint GRAMMATICAL_GENDER_NEUTRAL() { return get_static_field<"GRAMMATICAL_GENDER_NEUTRAL", jint>(); }
	static jint GRAMMATICAL_GENDER_NOT_SPECIFIED() { return get_static_field<"GRAMMATICAL_GENDER_NOT_SPECIFIED", jint>(); }
	static jint HARDKEYBOARDHIDDEN_NO() { return get_static_field<"HARDKEYBOARDHIDDEN_NO", jint>(); }
	static jint HARDKEYBOARDHIDDEN_UNDEFINED() { return get_static_field<"HARDKEYBOARDHIDDEN_UNDEFINED", jint>(); }
	static jint HARDKEYBOARDHIDDEN_YES() { return get_static_field<"HARDKEYBOARDHIDDEN_YES", jint>(); }
	static jint KEYBOARDHIDDEN_NO() { return get_static_field<"KEYBOARDHIDDEN_NO", jint>(); }
	static jint KEYBOARDHIDDEN_UNDEFINED() { return get_static_field<"KEYBOARDHIDDEN_UNDEFINED", jint>(); }
	static jint KEYBOARDHIDDEN_YES() { return get_static_field<"KEYBOARDHIDDEN_YES", jint>(); }
	static jint KEYBOARD_12KEY() { return get_static_field<"KEYBOARD_12KEY", jint>(); }
	static jint KEYBOARD_NOKEYS() { return get_static_field<"KEYBOARD_NOKEYS", jint>(); }
	static jint KEYBOARD_QWERTY() { return get_static_field<"KEYBOARD_QWERTY", jint>(); }
	static jint KEYBOARD_UNDEFINED() { return get_static_field<"KEYBOARD_UNDEFINED", jint>(); }
	static jint MNC_ZERO() { return get_static_field<"MNC_ZERO", jint>(); }
	static jint NAVIGATIONHIDDEN_NO() { return get_static_field<"NAVIGATIONHIDDEN_NO", jint>(); }
	static jint NAVIGATIONHIDDEN_UNDEFINED() { return get_static_field<"NAVIGATIONHIDDEN_UNDEFINED", jint>(); }
	static jint NAVIGATIONHIDDEN_YES() { return get_static_field<"NAVIGATIONHIDDEN_YES", jint>(); }
	static jint NAVIGATION_DPAD() { return get_static_field<"NAVIGATION_DPAD", jint>(); }
	static jint NAVIGATION_NONAV() { return get_static_field<"NAVIGATION_NONAV", jint>(); }
	static jint NAVIGATION_TRACKBALL() { return get_static_field<"NAVIGATION_TRACKBALL", jint>(); }
	static jint NAVIGATION_UNDEFINED() { return get_static_field<"NAVIGATION_UNDEFINED", jint>(); }
	static jint NAVIGATION_WHEEL() { return get_static_field<"NAVIGATION_WHEEL", jint>(); }
	static jint ORIENTATION_LANDSCAPE() { return get_static_field<"ORIENTATION_LANDSCAPE", jint>(); }
	static jint ORIENTATION_PORTRAIT() { return get_static_field<"ORIENTATION_PORTRAIT", jint>(); }
	static jint ORIENTATION_SQUARE() { return get_static_field<"ORIENTATION_SQUARE", jint>(); }
	static jint ORIENTATION_UNDEFINED() { return get_static_field<"ORIENTATION_UNDEFINED", jint>(); }
	static jint SCREENLAYOUT_LAYOUTDIR_LTR() { return get_static_field<"SCREENLAYOUT_LAYOUTDIR_LTR", jint>(); }
	static jint SCREENLAYOUT_LAYOUTDIR_MASK() { return get_static_field<"SCREENLAYOUT_LAYOUTDIR_MASK", jint>(); }
	static jint SCREENLAYOUT_LAYOUTDIR_RTL() { return get_static_field<"SCREENLAYOUT_LAYOUTDIR_RTL", jint>(); }
	static jint SCREENLAYOUT_LAYOUTDIR_SHIFT() { return get_static_field<"SCREENLAYOUT_LAYOUTDIR_SHIFT", jint>(); }
	static jint SCREENLAYOUT_LAYOUTDIR_UNDEFINED() { return get_static_field<"SCREENLAYOUT_LAYOUTDIR_UNDEFINED", jint>(); }
	static jint SCREENLAYOUT_LONG_MASK() { return get_static_field<"SCREENLAYOUT_LONG_MASK", jint>(); }
	static jint SCREENLAYOUT_LONG_NO() { return get_static_field<"SCREENLAYOUT_LONG_NO", jint>(); }
	static jint SCREENLAYOUT_LONG_UNDEFINED() { return get_static_field<"SCREENLAYOUT_LONG_UNDEFINED", jint>(); }
	static jint SCREENLAYOUT_LONG_YES() { return get_static_field<"SCREENLAYOUT_LONG_YES", jint>(); }
	static jint SCREENLAYOUT_ROUND_MASK() { return get_static_field<"SCREENLAYOUT_ROUND_MASK", jint>(); }
	static jint SCREENLAYOUT_ROUND_NO() { return get_static_field<"SCREENLAYOUT_ROUND_NO", jint>(); }
	static jint SCREENLAYOUT_ROUND_UNDEFINED() { return get_static_field<"SCREENLAYOUT_ROUND_UNDEFINED", jint>(); }
	static jint SCREENLAYOUT_ROUND_YES() { return get_static_field<"SCREENLAYOUT_ROUND_YES", jint>(); }
	static jint SCREENLAYOUT_SIZE_LARGE() { return get_static_field<"SCREENLAYOUT_SIZE_LARGE", jint>(); }
	static jint SCREENLAYOUT_SIZE_MASK() { return get_static_field<"SCREENLAYOUT_SIZE_MASK", jint>(); }
	static jint SCREENLAYOUT_SIZE_NORMAL() { return get_static_field<"SCREENLAYOUT_SIZE_NORMAL", jint>(); }
	static jint SCREENLAYOUT_SIZE_SMALL() { return get_static_field<"SCREENLAYOUT_SIZE_SMALL", jint>(); }
	static jint SCREENLAYOUT_SIZE_UNDEFINED() { return get_static_field<"SCREENLAYOUT_SIZE_UNDEFINED", jint>(); }
	static jint SCREENLAYOUT_SIZE_XLARGE() { return get_static_field<"SCREENLAYOUT_SIZE_XLARGE", jint>(); }
	static jint SCREENLAYOUT_UNDEFINED() { return get_static_field<"SCREENLAYOUT_UNDEFINED", jint>(); }
	static jint SCREEN_HEIGHT_DP_UNDEFINED() { return get_static_field<"SCREEN_HEIGHT_DP_UNDEFINED", jint>(); }
	static jint SCREEN_WIDTH_DP_UNDEFINED() { return get_static_field<"SCREEN_WIDTH_DP_UNDEFINED", jint>(); }
	static jint SMALLEST_SCREEN_WIDTH_DP_UNDEFINED() { return get_static_field<"SMALLEST_SCREEN_WIDTH_DP_UNDEFINED", jint>(); }
	static jint TOUCHSCREEN_FINGER() { return get_static_field<"TOUCHSCREEN_FINGER", jint>(); }
	static jint TOUCHSCREEN_NOTOUCH() { return get_static_field<"TOUCHSCREEN_NOTOUCH", jint>(); }
	static jint TOUCHSCREEN_STYLUS() { return get_static_field<"TOUCHSCREEN_STYLUS", jint>(); }
	static jint TOUCHSCREEN_UNDEFINED() { return get_static_field<"TOUCHSCREEN_UNDEFINED", jint>(); }
	static jint UI_MODE_NIGHT_MASK() { return get_static_field<"UI_MODE_NIGHT_MASK", jint>(); }
	static jint UI_MODE_NIGHT_NO() { return get_static_field<"UI_MODE_NIGHT_NO", jint>(); }
	static jint UI_MODE_NIGHT_UNDEFINED() { return get_static_field<"UI_MODE_NIGHT_UNDEFINED", jint>(); }
	static jint UI_MODE_NIGHT_YES() { return get_static_field<"UI_MODE_NIGHT_YES", jint>(); }
	static jint UI_MODE_TYPE_APPLIANCE() { return get_static_field<"UI_MODE_TYPE_APPLIANCE", jint>(); }
	static jint UI_MODE_TYPE_CAR() { return get_static_field<"UI_MODE_TYPE_CAR", jint>(); }
	static jint UI_MODE_TYPE_DESK() { return get_static_field<"UI_MODE_TYPE_DESK", jint>(); }
	static jint UI_MODE_TYPE_MASK() { return get_static_field<"UI_MODE_TYPE_MASK", jint>(); }
	static jint UI_MODE_TYPE_NORMAL() { return get_static_field<"UI_MODE_TYPE_NORMAL", jint>(); }
	static jint UI_MODE_TYPE_TELEVISION() { return get_static_field<"UI_MODE_TYPE_TELEVISION", jint>(); }
	static jint UI_MODE_TYPE_UNDEFINED() { return get_static_field<"UI_MODE_TYPE_UNDEFINED", jint>(); }
	static jint UI_MODE_TYPE_VR_HEADSET() { return get_static_field<"UI_MODE_TYPE_VR_HEADSET", jint>(); }
	static jint UI_MODE_TYPE_WATCH() { return get_static_field<"UI_MODE_TYPE_WATCH", jint>(); }
	jint colorMode() { return get_field<"colorMode", jint>(); }
	void colorMode(jint v) { set_field<"colorMode", jint>(v); }
	jint densityDpi() { return get_field<"densityDpi", jint>(); }
	void densityDpi(jint v) { set_field<"densityDpi", jint>(v); }
	jfloat fontScale() { return get_field<"fontScale", jfloat>(); }
	void fontScale(jfloat v) { set_field<"fontScale", jfloat>(v); }
	jint fontWeightAdjustment() { return get_field<"fontWeightAdjustment", jint>(); }
	void fontWeightAdjustment(jint v) { set_field<"fontWeightAdjustment", jint>(v); }
	jint hardKeyboardHidden() { return get_field<"hardKeyboardHidden", jint>(); }
	void hardKeyboardHidden(jint v) { set_field<"hardKeyboardHidden", jint>(v); }
	jint keyboard() { return get_field<"keyboard", jint>(); }
	void keyboard(jint v) { set_field<"keyboard", jint>(v); }
	jint keyboardHidden() { return get_field<"keyboardHidden", jint>(); }
	void keyboardHidden(jint v) { set_field<"keyboardHidden", jint>(v); }
	jni::ref<java::util::Locale> locale() { return get_field<"locale", jni::ref<java::util::Locale>>(); }
	void locale(jni::ref<java::util::Locale> v) { set_field<"locale", jni::ref<java::util::Locale>>(v); }
	jint mcc() { return get_field<"mcc", jint>(); }
	void mcc(jint v) { set_field<"mcc", jint>(v); }
	jint mnc() { return get_field<"mnc", jint>(); }
	void mnc(jint v) { set_field<"mnc", jint>(v); }
	jint navigation() { return get_field<"navigation", jint>(); }
	void navigation(jint v) { set_field<"navigation", jint>(v); }
	jint navigationHidden() { return get_field<"navigationHidden", jint>(); }
	void navigationHidden(jint v) { set_field<"navigationHidden", jint>(v); }
	jint orientation() { return get_field<"orientation", jint>(); }
	void orientation(jint v) { set_field<"orientation", jint>(v); }
	jint screenHeightDp() { return get_field<"screenHeightDp", jint>(); }
	void screenHeightDp(jint v) { set_field<"screenHeightDp", jint>(v); }
	jint screenLayout() { return get_field<"screenLayout", jint>(); }
	void screenLayout(jint v) { set_field<"screenLayout", jint>(v); }
	jint screenWidthDp() { return get_field<"screenWidthDp", jint>(); }
	void screenWidthDp(jint v) { set_field<"screenWidthDp", jint>(v); }
	jint smallestScreenWidthDp() { return get_field<"smallestScreenWidthDp", jint>(); }
	void smallestScreenWidthDp(jint v) { set_field<"smallestScreenWidthDp", jint>(v); }
	jint touchscreen() { return get_field<"touchscreen", jint>(); }
	void touchscreen(jint v) { set_field<"touchscreen", jint>(v); }
	jint uiMode() { return get_field<"uiMode", jint>(); }
	void uiMode(jint v) { set_field<"uiMode", jint>(v); }

	static jni::ref<android::content::res::Configuration> new_object() { return base_::new_object(); }
	static jni::ref<android::content::res::Configuration> new_object(jni::ref<android::content::res::Configuration> o) { return base_::new_object(o); }
	jboolean isLayoutSizeAtLeast(jint size) { return call_method<"isLayoutSizeAtLeast", jboolean>(size); }
	void setTo(jni::ref<android::content::res::Configuration> o) { return call_method<"setTo", void>(o); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void setToDefaults() { return call_method<"setToDefaults", void>(); }
	jint updateFrom(jni::ref<android::content::res::Configuration> delta) { return call_method<"updateFrom", jint>(delta); }
	jint diff(jni::ref<android::content::res::Configuration> delta) { return call_method<"diff", jint>(delta); }
	static jboolean needNewResources(jint configChanges, jint interestingChanges) { return call_static_method<"needNewResources", jboolean>(configChanges, interestingChanges); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	void readFromParcel(jni::ref<android::os::Parcel> source) { return call_method<"readFromParcel", void>(source); }
	jboolean isNightModeActive() { return call_method<"isNightModeActive", jboolean>(); }
	jint compareTo(jni::ref<android::content::res::Configuration> that) { return call_method<"compareTo", jint>(that); }
	jboolean equals(jni::ref<android::content::res::Configuration> that) { return call_method<"equals", jboolean>(that); }
	jboolean equals(jni::ref<java::lang::Object> that) { return call_method<"equals", jboolean>(that); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint getGrammaticalGender() { return call_method<"getGrammaticalGender", jint>(); }
	jni::ref<android::os::LocaleList> getLocales() { return call_method<"getLocales", jni::ref<android::os::LocaleList>>(); }
	void setLocales(jni::ref<android::os::LocaleList> locales) { return call_method<"setLocales", void>(locales); }
	void setLocale(jni::ref<java::util::Locale> loc) { return call_method<"setLocale", void>(loc); }
	jint getLayoutDirection() { return call_method<"getLayoutDirection", jint>(); }
	void setLayoutDirection(jni::ref<java::util::Locale> loc) { return call_method<"setLayoutDirection", void>(loc); }
	jboolean isScreenRound() { return call_method<"isScreenRound", jboolean>(); }
	jboolean isScreenWideColorGamut() { return call_method<"isScreenWideColorGamut", jboolean>(); }
	jboolean isScreenHdr() { return call_method<"isScreenHdr", jboolean>(); }
	static jni::ref<android::content::res::Configuration> generateDelta(jni::ref<android::content::res::Configuration> base, jni::ref<android::content::res::Configuration> change) { return call_static_method<"generateDelta", jni::ref<android::content::res::Configuration>>(base, change); }

protected:

	Configuration(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_RES_CONFIGURATION
