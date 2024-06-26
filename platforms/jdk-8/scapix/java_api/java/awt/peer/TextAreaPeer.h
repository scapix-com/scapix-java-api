// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/peer/TextComponentPeer.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_PEER_TEXTAREAPEER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_PEER_TEXTAREAPEER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::peer { class TextAreaPeer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::peer::TextAreaPeer>
{
	static constexpr fixed_string class_name = "java/awt/peer/TextAreaPeer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::peer::TextComponentPeer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PEER_TEXTAREAPEER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_PEER_TEXTAREAPEER)
#define SCAPIX_JAVA_API_JAVA_AWT_PEER_TEXTAREAPEER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::peer::TextAreaPeer : public jni::object_base<"java/awt/peer/TextAreaPeer",
	java::lang::Object,
	java::awt::peer::TextComponentPeer>
{
public:

	void insert(jni::ref<java::lang::String> p1, jint p2) { return call_method<"insert", void>(p1, p2); }
	void replaceRange(jni::ref<java::lang::String> p1, jint p2, jint p3) { return call_method<"replaceRange", void>(p1, p2, p3); }
	jni::ref<java::awt::Dimension> getPreferredSize(jint p1, jint p2) { return call_method<"getPreferredSize", jni::ref<java::awt::Dimension>>(p1, p2); }
	jni::ref<java::awt::Dimension> getMinimumSize(jint p1, jint p2) { return call_method<"getMinimumSize", jni::ref<java::awt::Dimension>>(p1, p2); }

protected:

	TextAreaPeer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PEER_TEXTAREAPEER
