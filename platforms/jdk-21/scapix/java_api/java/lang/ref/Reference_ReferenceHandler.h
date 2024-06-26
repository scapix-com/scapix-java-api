// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Thread.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REF_REFERENCE_REFERENCEHANDLER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REF_REFERENCE_REFERENCEHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::ref { class Reference_ReferenceHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ref::Reference_ReferenceHandler>
{
	static constexpr fixed_string class_name = "java/lang/ref/Reference$ReferenceHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Thread>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REF_REFERENCE_REFERENCEHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REF_REFERENCE_REFERENCEHANDLER)
#define SCAPIX_JAVA_API_JAVA_LANG_REF_REFERENCE_REFERENCEHANDLER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::ref::Reference_ReferenceHandler : public jni::object_base<"java/lang/ref/Reference$ReferenceHandler",
	java::lang::Thread>
{
public:

	void run() { return call_method<"run", void>(); }

protected:

	Reference_ReferenceHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REF_REFERENCE_REFERENCEHANDLER
