// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_DATATRANSFER_FLAVORMAP_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_DATATRANSFER_FLAVORMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::datatransfer { class FlavorMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::datatransfer::FlavorMap>
{
	static constexpr fixed_string class_name = "java/awt/datatransfer/FlavorMap";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_DATATRANSFER_FLAVORMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_DATATRANSFER_FLAVORMAP)
#define SCAPIX_JAVA_API_JAVA_AWT_DATATRANSFER_FLAVORMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/datatransfer/DataFlavor.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::datatransfer::FlavorMap : public jni::object_base<"java/awt/datatransfer/FlavorMap",
	java::lang::Object>
{
public:

	jni::ref<java::util::Map> getNativesForFlavors(jni::ref<jni::array<java::awt::datatransfer::DataFlavor>> p1) { return call_method<"getNativesForFlavors", jni::ref<java::util::Map>>(p1); }
	jni::ref<java::util::Map> getFlavorsForNatives(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"getFlavorsForNatives", jni::ref<java::util::Map>>(p1); }

protected:

	FlavorMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_DATATRANSFER_FLAVORMAP
