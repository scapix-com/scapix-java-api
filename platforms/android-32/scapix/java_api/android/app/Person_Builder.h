// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_PERSON_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_PERSON_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class Person_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::Person_Builder>
{
	static constexpr fixed_string class_name = "android/app/Person$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_PERSON_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_PERSON_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_APP_PERSON_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Person.h>
#include <scapix/java_api/android/graphics/drawable/Icon.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::Person_Builder : public jni::object_base<"android/app/Person$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::app::Person_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::app::Person_Builder> setName(jni::ref<java::lang::CharSequence> name) { return call_method<"setName", jni::ref<android::app::Person_Builder>>(name); }
	jni::ref<android::app::Person_Builder> setIcon(jni::ref<android::graphics::drawable::Icon> icon) { return call_method<"setIcon", jni::ref<android::app::Person_Builder>>(icon); }
	jni::ref<android::app::Person_Builder> setUri(jni::ref<java::lang::String> uri) { return call_method<"setUri", jni::ref<android::app::Person_Builder>>(uri); }
	jni::ref<android::app::Person_Builder> setKey(jni::ref<java::lang::String> key) { return call_method<"setKey", jni::ref<android::app::Person_Builder>>(key); }
	jni::ref<android::app::Person_Builder> setImportant(jboolean isImportant) { return call_method<"setImportant", jni::ref<android::app::Person_Builder>>(isImportant); }
	jni::ref<android::app::Person_Builder> setBot(jboolean isBot) { return call_method<"setBot", jni::ref<android::app::Person_Builder>>(isBot); }
	jni::ref<android::app::Person> build() { return call_method<"build", jni::ref<android::app::Person>>(); }

protected:

	Person_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_PERSON_BUILDER
