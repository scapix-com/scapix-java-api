// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_THREAD_THREADNUMBERING_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_THREAD_THREADNUMBERING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class Thread_ThreadNumbering; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::Thread_ThreadNumbering>
{
	static constexpr fixed_string class_name = "java/lang/Thread$ThreadNumbering";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_THREAD_THREADNUMBERING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_THREAD_THREADNUMBERING)
#define SCAPIX_JAVA_API_JAVA_LANG_THREAD_THREADNUMBERING

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::Thread_ThreadNumbering : public jni::object_base<"java/lang/Thread$ThreadNumbering",
	java::lang::Object>
{
public:


protected:

	Thread_ThreadNumbering(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_THREAD_THREADNUMBERING
