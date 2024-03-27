// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_DEBUGGRAPHICSINFO_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_DEBUGGRAPHICSINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class DebugGraphicsInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::DebugGraphicsInfo>
{
	static constexpr fixed_string class_name = "javax/swing/DebugGraphicsInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_DEBUGGRAPHICSINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_DEBUGGRAPHICSINFO)
#define SCAPIX_JAVA_API_JAVAX_SWING_DEBUGGRAPHICSINFO

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::DebugGraphicsInfo : public jni::object_base<"javax/swing/DebugGraphicsInfo",
	java::lang::Object>
{
public:


protected:

	DebugGraphicsInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_DEBUGGRAPHICSINFO