// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_DOUBLEZIGGURATTABLES_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_DOUBLEZIGGURATTABLES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::util::random { class RandomSupport_DoubleZigguratTables; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::util::random::RandomSupport_DoubleZigguratTables>
{
	static constexpr fixed_string class_name = "jdk/internal/util/random/RandomSupport$DoubleZigguratTables";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_DOUBLEZIGGURATTABLES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_DOUBLEZIGGURATTABLES)
#define SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_DOUBLEZIGGURATTABLES

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::util::random::RandomSupport_DoubleZigguratTables : public jni::object_base<"jdk/internal/util/random/RandomSupport$DoubleZigguratTables",
	java::lang::Object>
{
public:


protected:

	RandomSupport_DoubleZigguratTables(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_RANDOM_RANDOMSUPPORT_DOUBLEZIGGURATTABLES
