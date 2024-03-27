// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/content/res/Resources.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEST_MOCK_MOCKRESOURCES_FWD
#define SCAPIX_JAVA_API_ANDROID_TEST_MOCK_MOCKRESOURCES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::test::mock { class MockResources; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::test::mock::MockResources>
{
	static constexpr fixed_string class_name = "android/test/mock/MockResources";
	using base_classes = std::tuple<scapix::java_api::android::content::res::Resources>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEST_MOCK_MOCKRESOURCES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEST_MOCK_MOCKRESOURCES)
#define SCAPIX_JAVA_API_ANDROID_TEST_MOCK_MOCKRESOURCES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/res/AssetFileDescriptor.h>
#include <scapix/java_api/android/content/res/ColorStateList.h>
#include <scapix/java_api/android/content/res/Configuration.h>
#include <scapix/java_api/android/content/res/TypedArray.h>
#include <scapix/java_api/android/content/res/XmlResourceParser.h>
#include <scapix/java_api/android/graphics/Movie.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/util/DisplayMetrics.h>
#include <scapix/java_api/android/util/TypedValue.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::test::mock::MockResources : public jni::object_base<"android/test/mock/MockResources",
	android::content::res::Resources>
{
public:

	static jni::ref<android::test::mock::MockResources> new_object() { return base_::new_object(); }
	void updateConfiguration(jni::ref<android::content::res::Configuration> config, jni::ref<android::util::DisplayMetrics> metrics) { return call_method<"updateConfiguration", void>(config, metrics); }
	jni::ref<java::lang::CharSequence> getText(jint id) { return call_method<"getText", jni::ref<java::lang::CharSequence>>(id); }
	jni::ref<java::lang::CharSequence> getQuantityText(jint id, jint quantity) { return call_method<"getQuantityText", jni::ref<java::lang::CharSequence>>(id, quantity); }
	jni::ref<java::lang::String> getString(jint id) { return call_method<"getString", jni::ref<java::lang::String>>(id); }
	jni::ref<java::lang::String> getString(jint id, jni::ref<jni::array<java::lang::Object>> formatArgs) { return call_method<"getString", jni::ref<java::lang::String>>(id, formatArgs); }
	jni::ref<java::lang::String> getQuantityString(jint id, jint quantity, jni::ref<jni::array<java::lang::Object>> formatArgs) { return call_method<"getQuantityString", jni::ref<java::lang::String>>(id, quantity, formatArgs); }
	jni::ref<java::lang::String> getQuantityString(jint id, jint quantity) { return call_method<"getQuantityString", jni::ref<java::lang::String>>(id, quantity); }
	jni::ref<java::lang::CharSequence> getText(jint id, jni::ref<java::lang::CharSequence> def) { return call_method<"getText", jni::ref<java::lang::CharSequence>>(id, def); }
	jni::ref<jni::array<java::lang::CharSequence>> getTextArray(jint id) { return call_method<"getTextArray", jni::ref<jni::array<java::lang::CharSequence>>>(id); }
	jni::ref<jni::array<java::lang::String>> getStringArray(jint id) { return call_method<"getStringArray", jni::ref<jni::array<java::lang::String>>>(id); }
	jni::ref<jni::array<jint>> getIntArray(jint id) { return call_method<"getIntArray", jni::ref<jni::array<jint>>>(id); }
	jni::ref<android::content::res::TypedArray> obtainTypedArray(jint id) { return call_method<"obtainTypedArray", jni::ref<android::content::res::TypedArray>>(id); }
	jfloat getDimension(jint id) { return call_method<"getDimension", jfloat>(id); }
	jint getDimensionPixelOffset(jint id) { return call_method<"getDimensionPixelOffset", jint>(id); }
	jint getDimensionPixelSize(jint id) { return call_method<"getDimensionPixelSize", jint>(id); }
	jni::ref<android::graphics::drawable::Drawable> getDrawable(jint id) { return call_method<"getDrawable", jni::ref<android::graphics::drawable::Drawable>>(id); }
	jni::ref<android::graphics::Movie> getMovie(jint id) { return call_method<"getMovie", jni::ref<android::graphics::Movie>>(id); }
	jint getColor(jint id) { return call_method<"getColor", jint>(id); }
	jni::ref<android::content::res::ColorStateList> getColorStateList(jint id) { return call_method<"getColorStateList", jni::ref<android::content::res::ColorStateList>>(id); }
	jint getInteger(jint id) { return call_method<"getInteger", jint>(id); }
	jni::ref<android::content::res::XmlResourceParser> getLayout(jint id) { return call_method<"getLayout", jni::ref<android::content::res::XmlResourceParser>>(id); }
	jni::ref<android::content::res::XmlResourceParser> getAnimation(jint id) { return call_method<"getAnimation", jni::ref<android::content::res::XmlResourceParser>>(id); }
	jni::ref<android::content::res::XmlResourceParser> getXml(jint id) { return call_method<"getXml", jni::ref<android::content::res::XmlResourceParser>>(id); }
	jni::ref<java::io::InputStream> openRawResource(jint id) { return call_method<"openRawResource", jni::ref<java::io::InputStream>>(id); }
	jni::ref<android::content::res::AssetFileDescriptor> openRawResourceFd(jint id) { return call_method<"openRawResourceFd", jni::ref<android::content::res::AssetFileDescriptor>>(id); }
	void getValue(jint id, jni::ref<android::util::TypedValue> outValue, jboolean resolveRefs) { return call_method<"getValue", void>(id, outValue, resolveRefs); }
	void getValue(jni::ref<java::lang::String> name, jni::ref<android::util::TypedValue> outValue, jboolean resolveRefs) { return call_method<"getValue", void>(name, outValue, resolveRefs); }
	jni::ref<android::content::res::TypedArray> obtainAttributes(jni::ref<android::util::AttributeSet> set, jni::ref<jni::array<jint>> attrs) { return call_method<"obtainAttributes", jni::ref<android::content::res::TypedArray>>(set, attrs); }
	jni::ref<android::util::DisplayMetrics> getDisplayMetrics() { return call_method<"getDisplayMetrics", jni::ref<android::util::DisplayMetrics>>(); }
	jni::ref<android::content::res::Configuration> getConfiguration() { return call_method<"getConfiguration", jni::ref<android::content::res::Configuration>>(); }
	jint getIdentifier(jni::ref<java::lang::String> name, jni::ref<java::lang::String> defType, jni::ref<java::lang::String> defPackage) { return call_method<"getIdentifier", jint>(name, defType, defPackage); }
	jni::ref<java::lang::String> getResourceName(jint resid) { return call_method<"getResourceName", jni::ref<java::lang::String>>(resid); }
	jni::ref<java::lang::String> getResourcePackageName(jint resid) { return call_method<"getResourcePackageName", jni::ref<java::lang::String>>(resid); }
	jni::ref<java::lang::String> getResourceTypeName(jint resid) { return call_method<"getResourceTypeName", jni::ref<java::lang::String>>(resid); }
	jni::ref<java::lang::String> getResourceEntryName(jint resid) { return call_method<"getResourceEntryName", jni::ref<java::lang::String>>(resid); }

protected:

	MockResources(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEST_MOCK_MOCKRESOURCES
