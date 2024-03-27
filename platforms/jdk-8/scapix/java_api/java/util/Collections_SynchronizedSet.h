// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Collections_SynchronizedCollection.h>
#include <scapix/java_api/java/util/Set.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SYNCHRONIZEDSET_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SYNCHRONIZEDSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Collections_SynchronizedSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Collections_SynchronizedSet>
{
	static constexpr fixed_string class_name = "java/util/Collections$SynchronizedSet";
	using base_classes = std::tuple<scapix::java_api::java::util::Collections_SynchronizedCollection, scapix::java_api::java::util::Set>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SYNCHRONIZEDSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SYNCHRONIZEDSET)
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SYNCHRONIZEDSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Collections_SynchronizedSet : public jni::object_base<"java/util/Collections$SynchronizedSet",
	java::util::Collections_SynchronizedCollection,
	java::util::Set>
{
public:

	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	Collections_SynchronizedSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SYNCHRONIZEDSET