// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_DALVIK_SYSTEM_ZIPPATHVALIDATOR_CALLBACK_FWD
#define SCAPIX_JAVA_API_DALVIK_SYSTEM_ZIPPATHVALIDATOR_CALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::dalvik::system { class ZipPathValidator_Callback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::dalvik::system::ZipPathValidator_Callback>
{
	static constexpr fixed_string class_name = "dalvik/system/ZipPathValidator$Callback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_DALVIK_SYSTEM_ZIPPATHVALIDATOR_CALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_DALVIK_SYSTEM_ZIPPATHVALIDATOR_CALLBACK)
#define SCAPIX_JAVA_API_DALVIK_SYSTEM_ZIPPATHVALIDATOR_CALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class dalvik::system::ZipPathValidator_Callback : public jni::object_base<"dalvik/system/ZipPathValidator$Callback",
	java::lang::Object>
{
public:

	void onZipEntryAccess(jni::ref<java::lang::String> path) { return call_method<"onZipEntryAccess", void>(path); }

protected:

	ZipPathValidator_Callback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_DALVIK_SYSTEM_ZIPPATHVALIDATOR_CALLBACK
