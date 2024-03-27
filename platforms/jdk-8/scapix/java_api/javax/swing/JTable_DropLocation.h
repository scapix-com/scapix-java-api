// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/TransferHandler_DropLocation.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JTABLE_DROPLOCATION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JTABLE_DROPLOCATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JTable_DropLocation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JTable_DropLocation>
{
	static constexpr fixed_string class_name = "javax/swing/JTable$DropLocation";
	using base_classes = std::tuple<scapix::java_api::javax::swing::TransferHandler_DropLocation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JTABLE_DROPLOCATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JTABLE_DROPLOCATION)
#define SCAPIX_JAVA_API_JAVAX_SWING_JTABLE_DROPLOCATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::JTable_DropLocation : public jni::object_base<"javax/swing/JTable$DropLocation",
	javax::swing::TransferHandler_DropLocation>
{
public:

	jint getRow() { return call_method<"getRow", jint>(); }
	jint getColumn() { return call_method<"getColumn", jint>(); }
	jboolean isInsertRow() { return call_method<"isInsertRow", jboolean>(); }
	jboolean isInsertColumn() { return call_method<"isInsertColumn", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	JTable_DropLocation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JTABLE_DROPLOCATION