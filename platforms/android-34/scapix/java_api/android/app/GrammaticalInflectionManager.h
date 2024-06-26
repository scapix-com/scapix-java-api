// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_GRAMMATICALINFLECTIONMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_GRAMMATICALINFLECTIONMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class GrammaticalInflectionManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::GrammaticalInflectionManager>
{
	static constexpr fixed_string class_name = "android/app/GrammaticalInflectionManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_GRAMMATICALINFLECTIONMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_GRAMMATICALINFLECTIONMANAGER)
#define SCAPIX_JAVA_API_ANDROID_APP_GRAMMATICALINFLECTIONMANAGER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::GrammaticalInflectionManager : public jni::object_base<"android/app/GrammaticalInflectionManager",
	java::lang::Object>
{
public:

	jint getApplicationGrammaticalGender() { return call_method<"getApplicationGrammaticalGender", jint>(); }
	void setRequestedApplicationGrammaticalGender(jint grammaticalGender) { return call_method<"setRequestedApplicationGrammaticalGender", void>(grammaticalGender); }

protected:

	GrammaticalInflectionManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_GRAMMATICALINFLECTIONMANAGER
