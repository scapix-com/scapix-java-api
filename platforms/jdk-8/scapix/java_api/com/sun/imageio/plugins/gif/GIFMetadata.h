// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/imageio/metadata/IIOMetadata.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_GIF_GIFMETADATA_FWD
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_GIF_GIFMETADATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::imageio::plugins::gif { class GIFMetadata; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::imageio::plugins::gif::GIFMetadata>
{
	static constexpr fixed_string class_name = "com/sun/imageio/plugins/gif/GIFMetadata";
	using base_classes = std::tuple<scapix::java_api::javax::imageio::metadata::IIOMetadata>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_GIF_GIFMETADATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_GIF_GIFMETADATA)
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_GIF_GIFMETADATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::imageio::plugins::gif::GIFMetadata : public jni::object_base<"com/sun/imageio/plugins/gif/GIFMetadata",
	javax::imageio::metadata::IIOMetadata>
{
public:

	void mergeTree(jni::ref<java::lang::String> p1, jni::ref<org::w3c::dom::Node> p2) { return call_method<"mergeTree", void>(p1, p2); }

protected:

	GIFMetadata(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_GIF_GIFMETADATA
