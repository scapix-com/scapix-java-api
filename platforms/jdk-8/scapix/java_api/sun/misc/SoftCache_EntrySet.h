// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractSet.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_SOFTCACHE_ENTRYSET_FWD
#define SCAPIX_JAVA_API_SUN_MISC_SOFTCACHE_ENTRYSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class SoftCache_EntrySet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::SoftCache_EntrySet>
{
	static constexpr fixed_string class_name = "sun/misc/SoftCache$EntrySet";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractSet>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_SOFTCACHE_ENTRYSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_SOFTCACHE_ENTRYSET)
#define SCAPIX_JAVA_API_SUN_MISC_SOFTCACHE_ENTRYSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::misc::SoftCache_EntrySet : public jni::object_base<"sun/misc/SoftCache$EntrySet",
	java::util::AbstractSet>
{
public:

	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jint size() { return call_method<"size", jint>(); }
	jboolean remove(jni::ref<java::lang::Object> p1) { return call_method<"remove", jboolean>(p1); }

protected:

	SoftCache_EntrySet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_SOFTCACHE_ENTRYSET
