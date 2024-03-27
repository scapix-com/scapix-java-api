// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_EDITABLE_FACTORY_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_EDITABLE_FACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text { class Editable_Factory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::Editable_Factory>
{
	static constexpr fixed_string class_name = "android/text/Editable$Factory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_EDITABLE_FACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_EDITABLE_FACTORY)
#define SCAPIX_JAVA_API_ANDROID_TEXT_EDITABLE_FACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/text/Editable.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::Editable_Factory : public jni::object_base<"android/text/Editable$Factory",
	java::lang::Object>
{
public:

	static jni::ref<android::text::Editable_Factory> new_object() { return base_::new_object(); }
	static jni::ref<android::text::Editable_Factory> getInstance() { return call_static_method<"getInstance", jni::ref<android::text::Editable_Factory>>(); }
	jni::ref<android::text::Editable> newEditable(jni::ref<java::lang::CharSequence> source) { return call_method<"newEditable", jni::ref<android::text::Editable>>(source); }

protected:

	Editable_Factory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_EDITABLE_FACTORY
