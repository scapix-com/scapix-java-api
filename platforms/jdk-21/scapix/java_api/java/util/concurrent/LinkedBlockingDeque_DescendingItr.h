// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/LinkedBlockingDeque_AbstractItr.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE_DESCENDINGITR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE_DESCENDINGITR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class LinkedBlockingDeque_DescendingItr; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::LinkedBlockingDeque_DescendingItr>
{
	static constexpr fixed_string class_name = "java/util/concurrent/LinkedBlockingDeque$DescendingItr";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::LinkedBlockingDeque_AbstractItr>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE_DESCENDINGITR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE_DESCENDINGITR)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE_DESCENDINGITR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::LinkedBlockingDeque_DescendingItr : public jni::object_base<"java/util/concurrent/LinkedBlockingDeque$DescendingItr",
	java::util::concurrent::LinkedBlockingDeque_AbstractItr>
{
public:


protected:

	LinkedBlockingDeque_DescendingItr(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE_DESCENDINGITR
