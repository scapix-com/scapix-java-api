// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_SAVEDDATASETSINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_SAVEDDATASETSINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::autofill { class SavedDatasetsInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::autofill::SavedDatasetsInfo>
{
	static constexpr fixed_string class_name = "android/service/autofill/SavedDatasetsInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_SAVEDDATASETSINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_SAVEDDATASETSINFO)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_SAVEDDATASETSINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::autofill::SavedDatasetsInfo : public jni::object_base<"android/service/autofill/SavedDatasetsInfo",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> TYPE_OTHER() { return get_static_field<"TYPE_OTHER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TYPE_PASSWORDS() { return get_static_field<"TYPE_PASSWORDS", jni::ref<java::lang::String>>(); }

	static jni::ref<android::service::autofill::SavedDatasetsInfo> new_object(jni::ref<java::lang::String> type, jint count) { return base_::new_object(type, count); }
	jni::ref<java::lang::String> getType() { return call_method<"getType", jni::ref<java::lang::String>>(); }
	jint getCount() { return call_method<"getCount", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	SavedDatasetsInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_AUTOFILL_SAVEDDATASETSINFO
