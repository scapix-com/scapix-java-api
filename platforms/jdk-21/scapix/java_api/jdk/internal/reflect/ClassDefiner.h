// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CLASSDEFINER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CLASSDEFINER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::reflect { class ClassDefiner; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::reflect::ClassDefiner>
{
	static constexpr fixed_string class_name = "jdk/internal/reflect/ClassDefiner";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CLASSDEFINER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CLASSDEFINER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CLASSDEFINER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::reflect::ClassDefiner : public jni::object_base<"jdk/internal/reflect/ClassDefiner",
	java::lang::Object>
{
public:


protected:

	ClassDefiner(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_CLASSDEFINER