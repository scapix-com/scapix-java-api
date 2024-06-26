// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SWING_SWINGACCESSOR_JTEXTCOMPONENTACCESSOR_FWD
#define SCAPIX_JAVA_API_SUN_SWING_SWINGACCESSOR_JTEXTCOMPONENTACCESSOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::swing { class SwingAccessor_JTextComponentAccessor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::swing::SwingAccessor_JTextComponentAccessor>
{
	static constexpr fixed_string class_name = "sun/swing/SwingAccessor$JTextComponentAccessor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_SWINGACCESSOR_JTEXTCOMPONENTACCESSOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SWING_SWINGACCESSOR_JTEXTCOMPONENTACCESSOR)
#define SCAPIX_JAVA_API_SUN_SWING_SWINGACCESSOR_JTEXTCOMPONENTACCESSOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Point.h>
#include <scapix/java_api/javax/swing/TransferHandler_DropLocation.h>
#include <scapix/java_api/javax/swing/text/JTextComponent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::swing::SwingAccessor_JTextComponentAccessor : public jni::object_base<"sun/swing/SwingAccessor$JTextComponentAccessor",
	java::lang::Object>
{
public:

	jni::ref<javax::swing::TransferHandler_DropLocation> dropLocationForPoint(jni::ref<javax::swing::text::JTextComponent> p1, jni::ref<java::awt::Point> p2) { return call_method<"dropLocationForPoint", jni::ref<javax::swing::TransferHandler_DropLocation>>(p1, p2); }
	jni::ref<java::lang::Object> setDropLocation(jni::ref<javax::swing::text::JTextComponent> p1, jni::ref<javax::swing::TransferHandler_DropLocation> p2, jni::ref<java::lang::Object> p3, jboolean p4) { return call_method<"setDropLocation", jni::ref<java::lang::Object>>(p1, p2, p3, p4); }

protected:

	SwingAccessor_JTextComponentAccessor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_SWINGACCESSOR_JTEXTCOMPONENTACCESSOR
