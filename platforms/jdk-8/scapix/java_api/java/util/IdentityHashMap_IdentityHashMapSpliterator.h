// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_IDENTITYHASHMAP_IDENTITYHASHMAPSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_IDENTITYHASHMAP_IDENTITYHASHMAPSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class IdentityHashMap_IdentityHashMapSpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::IdentityHashMap_IdentityHashMapSpliterator>
{
	static constexpr fixed_string class_name = "java/util/IdentityHashMap$IdentityHashMapSpliterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_IDENTITYHASHMAP_IDENTITYHASHMAPSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_IDENTITYHASHMAP_IDENTITYHASHMAPSPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_IDENTITYHASHMAP_IDENTITYHASHMAPSPLITERATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::IdentityHashMap_IdentityHashMapSpliterator : public jni::object_base<"java/util/IdentityHashMap$IdentityHashMapSpliterator",
	java::lang::Object>
{
public:

	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }

protected:

	IdentityHashMap_IdentityHashMapSpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_IDENTITYHASHMAP_IDENTITYHASHMAPSPLITERATOR
