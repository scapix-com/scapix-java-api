// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_SWINGCONSTANTS_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_SWINGCONSTANTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class SwingConstants; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::SwingConstants>
{
	static constexpr fixed_string class_name = "javax/swing/SwingConstants";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_SWINGCONSTANTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_SWINGCONSTANTS)
#define SCAPIX_JAVA_API_JAVAX_SWING_SWINGCONSTANTS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::SwingConstants : public jni::object_base<"javax/swing/SwingConstants",
	java::lang::Object>
{
public:

	static jint CENTER() { return get_static_field<"CENTER", jint>(); }
	static jint TOP() { return get_static_field<"TOP", jint>(); }
	static jint LEFT() { return get_static_field<"LEFT", jint>(); }
	static jint BOTTOM() { return get_static_field<"BOTTOM", jint>(); }
	static jint RIGHT() { return get_static_field<"RIGHT", jint>(); }
	static jint NORTH() { return get_static_field<"NORTH", jint>(); }
	static jint NORTH_EAST() { return get_static_field<"NORTH_EAST", jint>(); }
	static jint EAST() { return get_static_field<"EAST", jint>(); }
	static jint SOUTH_EAST() { return get_static_field<"SOUTH_EAST", jint>(); }
	static jint SOUTH() { return get_static_field<"SOUTH", jint>(); }
	static jint SOUTH_WEST() { return get_static_field<"SOUTH_WEST", jint>(); }
	static jint WEST() { return get_static_field<"WEST", jint>(); }
	static jint NORTH_WEST() { return get_static_field<"NORTH_WEST", jint>(); }
	static jint HORIZONTAL() { return get_static_field<"HORIZONTAL", jint>(); }
	static jint VERTICAL() { return get_static_field<"VERTICAL", jint>(); }
	static jint LEADING() { return get_static_field<"LEADING", jint>(); }
	static jint TRAILING() { return get_static_field<"TRAILING", jint>(); }
	static jint NEXT() { return get_static_field<"NEXT", jint>(); }
	static jint PREVIOUS() { return get_static_field<"PREVIOUS", jint>(); }


protected:

	SwingConstants(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_SWINGCONSTANTS
