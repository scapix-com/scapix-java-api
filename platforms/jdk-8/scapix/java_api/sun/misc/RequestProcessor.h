// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Runnable.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_REQUESTPROCESSOR_FWD
#define SCAPIX_JAVA_API_SUN_MISC_REQUESTPROCESSOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class RequestProcessor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::RequestProcessor>
{
	static constexpr fixed_string class_name = "sun/misc/RequestProcessor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Runnable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_REQUESTPROCESSOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_REQUESTPROCESSOR)
#define SCAPIX_JAVA_API_SUN_MISC_REQUESTPROCESSOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/misc/Request.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::RequestProcessor : public jni::object_base<"sun/misc/RequestProcessor",
	java::lang::Object,
	java::lang::Runnable>
{
public:

	static jni::ref<sun::misc::RequestProcessor> new_object() { return base_::new_object(); }
	static void postRequest(jni::ref<sun::misc::Request> p1) { return call_static_method<"postRequest", void>(p1); }
	void run() { return call_method<"run", void>(); }
	static void startProcessing() { return call_static_method<"startProcessing", void>(); }

protected:

	RequestProcessor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_REQUESTPROCESSOR