// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASS_ATOMIC_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASS_ATOMIC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class Class_Atomic; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::Class_Atomic>
{
	static constexpr fixed_string class_name = "java/lang/Class$Atomic";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASS_ATOMIC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASS_ATOMIC)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASS_ATOMIC

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::Class_Atomic : public jni::object_base<"java/lang/Class$Atomic",
	java::lang::Object>
{
public:


protected:

	Class_Atomic(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASS_ATOMIC