// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_PEER_FONTPEER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_PEER_FONTPEER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::peer { class FontPeer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::peer::FontPeer>
{
	static constexpr fixed_string class_name = "java/awt/peer/FontPeer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PEER_FONTPEER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_PEER_FONTPEER)
#define SCAPIX_JAVA_API_JAVA_AWT_PEER_FONTPEER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::peer::FontPeer : public jni::object_base<"java/awt/peer/FontPeer",
	java::lang::Object>
{
public:


protected:

	FontPeer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PEER_FONTPEER
