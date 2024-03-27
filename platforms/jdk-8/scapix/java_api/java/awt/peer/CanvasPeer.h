// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/peer/ComponentPeer.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_PEER_CANVASPEER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_PEER_CANVASPEER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::peer { class CanvasPeer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::peer::CanvasPeer>
{
	static constexpr fixed_string class_name = "java/awt/peer/CanvasPeer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::peer::ComponentPeer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PEER_CANVASPEER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_PEER_CANVASPEER)
#define SCAPIX_JAVA_API_JAVA_AWT_PEER_CANVASPEER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/GraphicsConfiguration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::peer::CanvasPeer : public jni::object_base<"java/awt/peer/CanvasPeer",
	java::lang::Object,
	java::awt::peer::ComponentPeer>
{
public:

	jni::ref<java::awt::GraphicsConfiguration> getAppropriateGraphicsConfiguration(jni::ref<java::awt::GraphicsConfiguration> p1) { return call_method<"getAppropriateGraphicsConfiguration", jni::ref<java::awt::GraphicsConfiguration>>(p1); }

protected:

	CanvasPeer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PEER_CANVASPEER