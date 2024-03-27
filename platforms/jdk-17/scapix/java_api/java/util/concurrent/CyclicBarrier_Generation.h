// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CYCLICBARRIER_GENERATION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CYCLICBARRIER_GENERATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class CyclicBarrier_Generation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::CyclicBarrier_Generation>
{
	static constexpr fixed_string class_name = "java/util/concurrent/CyclicBarrier$Generation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CYCLICBARRIER_GENERATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CYCLICBARRIER_GENERATION)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CYCLICBARRIER_GENERATION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::CyclicBarrier_Generation : public jni::object_base<"java/util/concurrent/CyclicBarrier$Generation",
	java::lang::Object>
{
public:


protected:

	CyclicBarrier_Generation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CYCLICBARRIER_GENERATION