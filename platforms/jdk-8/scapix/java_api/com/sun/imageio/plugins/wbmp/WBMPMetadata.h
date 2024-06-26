// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/imageio/metadata/IIOMetadata.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_WBMP_WBMPMETADATA_FWD
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_WBMP_WBMPMETADATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::imageio::plugins::wbmp { class WBMPMetadata; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::imageio::plugins::wbmp::WBMPMetadata>
{
	static constexpr fixed_string class_name = "com/sun/imageio/plugins/wbmp/WBMPMetadata";
	using base_classes = std::tuple<scapix::java_api::javax::imageio::metadata::IIOMetadata>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_WBMP_WBMPMETADATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_WBMP_WBMPMETADATA)
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_WBMP_WBMPMETADATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::imageio::plugins::wbmp::WBMPMetadata : public jni::object_base<"com/sun/imageio/plugins/wbmp/WBMPMetadata",
	javax::imageio::metadata::IIOMetadata>
{
public:

	jint wbmpType() { return get_field<"wbmpType", jint>(); }
	void wbmpType(jint v) { set_field<"wbmpType", jint>(v); }
	jint width() { return get_field<"width", jint>(); }
	void width(jint v) { set_field<"width", jint>(v); }
	jint height() { return get_field<"height", jint>(); }
	void height(jint v) { set_field<"height", jint>(v); }

	static jni::ref<com::sun::imageio::plugins::wbmp::WBMPMetadata> new_object() { return base_::new_object(); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jni::ref<org::w3c::dom::Node> getAsTree(jni::ref<java::lang::String> p1) { return call_method<"getAsTree", jni::ref<org::w3c::dom::Node>>(p1); }
	void setFromTree(jni::ref<java::lang::String> p1, jni::ref<org::w3c::dom::Node> p2) { return call_method<"setFromTree", void>(p1, p2); }
	void mergeTree(jni::ref<java::lang::String> p1, jni::ref<org::w3c::dom::Node> p2) { return call_method<"mergeTree", void>(p1, p2); }
	void reset() { return call_method<"reset", void>(); }

protected:

	WBMPMetadata(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_WBMP_WBMPMETADATA
