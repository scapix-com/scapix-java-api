// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/java/util/jar/pack/BandStructure_Band.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_MULTIBAND_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_MULTIBAND_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class BandStructure_MultiBand; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::BandStructure_MultiBand>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/BandStructure$MultiBand";
	using base_classes = std::tuple<scapix::java_api::com::sun::java::util::jar::pack::BandStructure_Band>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_MULTIBAND_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_MULTIBAND)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_MULTIBAND

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::util::jar::pack::BandStructure_MultiBand : public jni::object_base<"com/sun/java/util/jar/pack/BandStructure$MultiBand",
	com::sun::java::util::jar::pack::BandStructure_Band>
{
public:

	jni::ref<com::sun::java::util::jar::pack::BandStructure_Band> init() { return call_method<"init", jni::ref<com::sun::java::util::jar::pack::BandStructure_Band>>(); }
	jint capacity() { return call_method<"capacity", jint>(); }
	void setCapacity(jint p1) { return call_method<"setCapacity", void>(p1); }
	jint length() { return call_method<"length", jint>(); }
	jint valuesRemainingForDebug() { return call_method<"valuesRemainingForDebug", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	BandStructure_MultiBand(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_MULTIBAND
