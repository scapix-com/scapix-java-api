// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_NIMBUSSTYLE_CACHEKEY_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_NIMBUSSTYLE_CACHEKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::nimbus { class NimbusStyle_CacheKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::nimbus::NimbusStyle_CacheKey>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/nimbus/NimbusStyle$CacheKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_NIMBUSSTYLE_CACHEKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_NIMBUSSTYLE_CACHEKEY)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_NIMBUSSTYLE_CACHEKEY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::nimbus::NimbusStyle_CacheKey : public jni::object_base<"javax/swing/plaf/nimbus/NimbusStyle$CacheKey",
	java::lang::Object>
{
public:

	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	NimbusStyle_CacheKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_NIMBUSSTYLE_CACHEKEY