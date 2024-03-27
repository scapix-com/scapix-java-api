// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_REVERSECOMPARATOR2_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_REVERSECOMPARATOR2_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Collections_ReverseComparator2; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Collections_ReverseComparator2>
{
	static constexpr fixed_string class_name = "java/util/Collections$ReverseComparator2";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Comparator, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_REVERSECOMPARATOR2_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_REVERSECOMPARATOR2)
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_REVERSECOMPARATOR2

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Collections_ReverseComparator2 : public jni::object_base<"java/util/Collections$ReverseComparator2",
	java::lang::Object,
	java::util::Comparator,
	java::io::Serializable>
{
public:

	jint compare(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"compare", jint>(p1, p2); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::util::Comparator> reversed() { return call_method<"reversed", jni::ref<java::util::Comparator>>(); }

protected:

	Collections_ReverseComparator2(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_REVERSECOMPARATOR2