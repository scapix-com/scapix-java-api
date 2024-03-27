// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/imageio/plugins/gif/GIFMetadata.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_GIF_GIFIMAGEMETADATA_FWD
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_GIF_GIFIMAGEMETADATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::imageio::plugins::gif { class GIFImageMetadata; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::imageio::plugins::gif::GIFImageMetadata>
{
	static constexpr fixed_string class_name = "com/sun/imageio/plugins/gif/GIFImageMetadata";
	using base_classes = std::tuple<scapix::java_api::com::sun::imageio::plugins::gif::GIFMetadata>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_GIF_GIFIMAGEMETADATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_GIF_GIFIMAGEMETADATA)
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_GIF_GIFIMAGEMETADATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/javax/imageio/metadata/IIOMetadataNode.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::imageio::plugins::gif::GIFImageMetadata : public jni::object_base<"com/sun/imageio/plugins/gif/GIFImageMetadata",
	com::sun::imageio::plugins::gif::GIFMetadata>
{
public:

	jint imageLeftPosition() { return get_field<"imageLeftPosition", jint>(); }
	void imageLeftPosition(jint v) { set_field<"imageLeftPosition", jint>(v); }
	jint imageTopPosition() { return get_field<"imageTopPosition", jint>(); }
	void imageTopPosition(jint v) { set_field<"imageTopPosition", jint>(v); }
	jint imageWidth() { return get_field<"imageWidth", jint>(); }
	void imageWidth(jint v) { set_field<"imageWidth", jint>(v); }
	jint imageHeight() { return get_field<"imageHeight", jint>(); }
	void imageHeight(jint v) { set_field<"imageHeight", jint>(v); }
	jboolean interlaceFlag() { return get_field<"interlaceFlag", jboolean>(); }
	void interlaceFlag(jboolean v) { set_field<"interlaceFlag", jboolean>(v); }
	jboolean sortFlag() { return get_field<"sortFlag", jboolean>(); }
	void sortFlag(jboolean v) { set_field<"sortFlag", jboolean>(v); }
	jni::ref<jni::array<jbyte>> localColorTable() { return get_field<"localColorTable", jni::ref<jni::array<jbyte>>>(); }
	void localColorTable(jni::ref<jni::array<jbyte>> v) { set_field<"localColorTable", jni::ref<jni::array<jbyte>>>(v); }
	jint disposalMethod() { return get_field<"disposalMethod", jint>(); }
	void disposalMethod(jint v) { set_field<"disposalMethod", jint>(v); }
	jboolean userInputFlag() { return get_field<"userInputFlag", jboolean>(); }
	void userInputFlag(jboolean v) { set_field<"userInputFlag", jboolean>(v); }
	jboolean transparentColorFlag() { return get_field<"transparentColorFlag", jboolean>(); }
	void transparentColorFlag(jboolean v) { set_field<"transparentColorFlag", jboolean>(v); }
	jint delayTime() { return get_field<"delayTime", jint>(); }
	void delayTime(jint v) { set_field<"delayTime", jint>(v); }
	jint transparentColorIndex() { return get_field<"transparentColorIndex", jint>(); }
	void transparentColorIndex(jint v) { set_field<"transparentColorIndex", jint>(v); }
	jboolean hasPlainTextExtension() { return get_field<"hasPlainTextExtension", jboolean>(); }
	void hasPlainTextExtension(jboolean v) { set_field<"hasPlainTextExtension", jboolean>(v); }
	jint textGridLeft() { return get_field<"textGridLeft", jint>(); }
	void textGridLeft(jint v) { set_field<"textGridLeft", jint>(v); }
	jint textGridTop() { return get_field<"textGridTop", jint>(); }
	void textGridTop(jint v) { set_field<"textGridTop", jint>(v); }
	jint textGridWidth() { return get_field<"textGridWidth", jint>(); }
	void textGridWidth(jint v) { set_field<"textGridWidth", jint>(v); }
	jint textGridHeight() { return get_field<"textGridHeight", jint>(); }
	void textGridHeight(jint v) { set_field<"textGridHeight", jint>(v); }
	jint characterCellWidth() { return get_field<"characterCellWidth", jint>(); }
	void characterCellWidth(jint v) { set_field<"characterCellWidth", jint>(v); }
	jint characterCellHeight() { return get_field<"characterCellHeight", jint>(); }
	void characterCellHeight(jint v) { set_field<"characterCellHeight", jint>(v); }
	jint textForegroundColor() { return get_field<"textForegroundColor", jint>(); }
	void textForegroundColor(jint v) { set_field<"textForegroundColor", jint>(v); }
	jint textBackgroundColor() { return get_field<"textBackgroundColor", jint>(); }
	void textBackgroundColor(jint v) { set_field<"textBackgroundColor", jint>(v); }
	jni::ref<jni::array<jbyte>> text() { return get_field<"text", jni::ref<jni::array<jbyte>>>(); }
	void text(jni::ref<jni::array<jbyte>> v) { set_field<"text", jni::ref<jni::array<jbyte>>>(v); }
	jni::ref<java::util::List> applicationIDs() { return get_field<"applicationIDs", jni::ref<java::util::List>>(); }
	void applicationIDs(jni::ref<java::util::List> v) { set_field<"applicationIDs", jni::ref<java::util::List>>(v); }
	jni::ref<java::util::List> authenticationCodes() { return get_field<"authenticationCodes", jni::ref<java::util::List>>(); }
	void authenticationCodes(jni::ref<java::util::List> v) { set_field<"authenticationCodes", jni::ref<java::util::List>>(v); }
	jni::ref<java::util::List> applicationData() { return get_field<"applicationData", jni::ref<java::util::List>>(); }
	void applicationData(jni::ref<java::util::List> v) { set_field<"applicationData", jni::ref<java::util::List>>(v); }
	jni::ref<java::util::List> comments() { return get_field<"comments", jni::ref<java::util::List>>(); }
	void comments(jni::ref<java::util::List> v) { set_field<"comments", jni::ref<java::util::List>>(v); }

	static jni::ref<com::sun::imageio::plugins::gif::GIFImageMetadata> new_object() { return base_::new_object(); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jni::ref<org::w3c::dom::Node> getAsTree(jni::ref<java::lang::String> p1) { return call_method<"getAsTree", jni::ref<org::w3c::dom::Node>>(p1); }
	jni::ref<javax::imageio::metadata::IIOMetadataNode> getStandardChromaNode() { return call_method<"getStandardChromaNode", jni::ref<javax::imageio::metadata::IIOMetadataNode>>(); }
	jni::ref<javax::imageio::metadata::IIOMetadataNode> getStandardCompressionNode() { return call_method<"getStandardCompressionNode", jni::ref<javax::imageio::metadata::IIOMetadataNode>>(); }
	jni::ref<javax::imageio::metadata::IIOMetadataNode> getStandardDataNode() { return call_method<"getStandardDataNode", jni::ref<javax::imageio::metadata::IIOMetadataNode>>(); }
	jni::ref<javax::imageio::metadata::IIOMetadataNode> getStandardDimensionNode() { return call_method<"getStandardDimensionNode", jni::ref<javax::imageio::metadata::IIOMetadataNode>>(); }
	jni::ref<javax::imageio::metadata::IIOMetadataNode> getStandardTextNode() { return call_method<"getStandardTextNode", jni::ref<javax::imageio::metadata::IIOMetadataNode>>(); }
	jni::ref<javax::imageio::metadata::IIOMetadataNode> getStandardTransparencyNode() { return call_method<"getStandardTransparencyNode", jni::ref<javax::imageio::metadata::IIOMetadataNode>>(); }
	void setFromTree(jni::ref<java::lang::String> p1, jni::ref<org::w3c::dom::Node> p2) { return call_method<"setFromTree", void>(p1, p2); }
	void reset() { return call_method<"reset", void>(); }

protected:

	GIFImageMetadata(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_GIF_GIFIMAGEMETADATA
