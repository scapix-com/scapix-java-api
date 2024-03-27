// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_THREADBUILDERS_BASETHREADBUILDER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_THREADBUILDERS_BASETHREADBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class ThreadBuilders_BaseThreadBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ThreadBuilders_BaseThreadBuilder>
{
	static constexpr fixed_string class_name = "java/lang/ThreadBuilders$BaseThreadBuilder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_THREADBUILDERS_BASETHREADBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_THREADBUILDERS_BASETHREADBUILDER)
#define SCAPIX_JAVA_API_JAVA_LANG_THREADBUILDERS_BASETHREADBUILDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::ThreadBuilders_BaseThreadBuilder : public jni::object_base<"java/lang/ThreadBuilders$BaseThreadBuilder",
	java::lang::Object>
{
public:


protected:

	ThreadBuilders_BaseThreadBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_THREADBUILDERS_BASETHREADBUILDER
