// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MISC_THREADTRACKER_THREADREF_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MISC_THREADTRACKER_THREADREF_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::misc { class ThreadTracker_ThreadRef; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::misc::ThreadTracker_ThreadRef>
{
	static constexpr fixed_string class_name = "jdk/internal/misc/ThreadTracker$ThreadRef";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MISC_THREADTRACKER_THREADREF_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MISC_THREADTRACKER_THREADREF)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MISC_THREADTRACKER_THREADREF

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Thread.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::misc::ThreadTracker_ThreadRef : public jni::object_base<"jdk/internal/misc/ThreadTracker$ThreadRef",
	java::lang::Record>
{
public:

	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Thread> thread() { return call_method<"thread", jni::ref<java::lang::Thread>>(); }

protected:

	ThreadTracker_ThreadRef(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MISC_THREADTRACKER_THREADREF