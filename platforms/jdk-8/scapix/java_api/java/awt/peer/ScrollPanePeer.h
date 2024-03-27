// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/peer/ContainerPeer.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_PEER_SCROLLPANEPEER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_PEER_SCROLLPANEPEER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::peer { class ScrollPanePeer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::peer::ScrollPanePeer>
{
	static constexpr fixed_string class_name = "java/awt/peer/ScrollPanePeer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::peer::ContainerPeer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PEER_SCROLLPANEPEER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_PEER_SCROLLPANEPEER)
#define SCAPIX_JAVA_API_JAVA_AWT_PEER_SCROLLPANEPEER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Adjustable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::peer::ScrollPanePeer : public jni::object_base<"java/awt/peer/ScrollPanePeer",
	java::lang::Object,
	java::awt::peer::ContainerPeer>
{
public:

	jint getHScrollbarHeight() { return call_method<"getHScrollbarHeight", jint>(); }
	jint getVScrollbarWidth() { return call_method<"getVScrollbarWidth", jint>(); }
	void setScrollPosition(jint p1, jint p2) { return call_method<"setScrollPosition", void>(p1, p2); }
	void childResized(jint p1, jint p2) { return call_method<"childResized", void>(p1, p2); }
	void setUnitIncrement(jni::ref<java::awt::Adjustable> p1, jint p2) { return call_method<"setUnitIncrement", void>(p1, p2); }
	void setValue(jni::ref<java::awt::Adjustable> p1, jint p2) { return call_method<"setValue", void>(p1, p2); }

protected:

	ScrollPanePeer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PEER_SCROLLPANEPEER