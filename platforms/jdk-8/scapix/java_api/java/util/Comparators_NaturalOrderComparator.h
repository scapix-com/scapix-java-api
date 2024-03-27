// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>
#include <scapix/java_api/java/util/Comparator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COMPARATORS_NATURALORDERCOMPARATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COMPARATORS_NATURALORDERCOMPARATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Comparators_NaturalOrderComparator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Comparators_NaturalOrderComparator>
{
	static constexpr fixed_string class_name = "java/util/Comparators$NaturalOrderComparator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum, scapix::java_api::java::util::Comparator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COMPARATORS_NATURALORDERCOMPARATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COMPARATORS_NATURALORDERCOMPARATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_COMPARATORS_NATURALORDERCOMPARATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Comparable.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Comparators_NaturalOrderComparator : public jni::object_base<"java/util/Comparators$NaturalOrderComparator",
	java::lang::Enum,
	java::util::Comparator>
{
public:

	static jni::ref<java::util::Comparators_NaturalOrderComparator> INSTANCE() { return get_static_field<"INSTANCE", jni::ref<java::util::Comparators_NaturalOrderComparator>>(); }

	static jni::ref<jni::array<java::util::Comparators_NaturalOrderComparator>> values() { return call_static_method<"values", jni::ref<jni::array<java::util::Comparators_NaturalOrderComparator>>>(); }
	static jni::ref<java::util::Comparators_NaturalOrderComparator> valueOf(jni::ref<java::lang::String> p1) { return call_static_method<"valueOf", jni::ref<java::util::Comparators_NaturalOrderComparator>>(p1); }
	jint compare(jni::ref<java::lang::Comparable> p1, jni::ref<java::lang::Comparable> p2) { return call_method<"compare", jint>(p1, p2); }
	jni::ref<java::util::Comparator> reversed() { return call_method<"reversed", jni::ref<java::util::Comparator>>(); }

protected:

	Comparators_NaturalOrderComparator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COMPARATORS_NATURALORDERCOMPARATOR
