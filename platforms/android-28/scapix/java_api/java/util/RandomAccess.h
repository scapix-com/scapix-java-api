// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_RANDOMACCESS_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_RANDOMACCESS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class RandomAccess; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::RandomAccess>
{
	static constexpr fixed_string class_name = "java/util/RandomAccess";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_RANDOMACCESS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_RANDOMACCESS)
#define SCAPIX_JAVA_API_JAVA_UTIL_RANDOMACCESS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::RandomAccess : public jni::object_base<"java/util/RandomAccess",
	java::lang::Object>
{
public:


protected:

	RandomAccess(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_RANDOMACCESS
