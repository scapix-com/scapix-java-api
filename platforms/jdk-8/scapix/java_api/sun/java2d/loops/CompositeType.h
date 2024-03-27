// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_COMPOSITETYPE_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_COMPOSITETYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::loops { class CompositeType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::loops::CompositeType>
{
	static constexpr fixed_string class_name = "sun/java2d/loops/CompositeType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_COMPOSITETYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_COMPOSITETYPE)
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_COMPOSITETYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/AlphaComposite.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::loops::CompositeType : public jni::object_base<"sun/java2d/loops/CompositeType",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> DESC_ANY() { return get_static_field<"DESC_ANY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DESC_XOR() { return get_static_field<"DESC_XOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DESC_CLEAR() { return get_static_field<"DESC_CLEAR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DESC_SRC() { return get_static_field<"DESC_SRC", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DESC_DST() { return get_static_field<"DESC_DST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DESC_SRC_OVER() { return get_static_field<"DESC_SRC_OVER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DESC_DST_OVER() { return get_static_field<"DESC_DST_OVER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DESC_SRC_IN() { return get_static_field<"DESC_SRC_IN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DESC_DST_IN() { return get_static_field<"DESC_DST_IN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DESC_SRC_OUT() { return get_static_field<"DESC_SRC_OUT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DESC_DST_OUT() { return get_static_field<"DESC_DST_OUT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DESC_SRC_ATOP() { return get_static_field<"DESC_SRC_ATOP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DESC_DST_ATOP() { return get_static_field<"DESC_DST_ATOP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DESC_ALPHA_XOR() { return get_static_field<"DESC_ALPHA_XOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DESC_SRC_NO_EA() { return get_static_field<"DESC_SRC_NO_EA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DESC_SRC_OVER_NO_EA() { return get_static_field<"DESC_SRC_OVER_NO_EA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DESC_ANY_ALPHA() { return get_static_field<"DESC_ANY_ALPHA", jni::ref<java::lang::String>>(); }
	static jni::ref<sun::java2d::loops::CompositeType> Any() { return get_static_field<"Any", jni::ref<sun::java2d::loops::CompositeType>>(); }
	static jni::ref<sun::java2d::loops::CompositeType> General() { return get_static_field<"General", jni::ref<sun::java2d::loops::CompositeType>>(); }
	static jni::ref<sun::java2d::loops::CompositeType> AnyAlpha() { return get_static_field<"AnyAlpha", jni::ref<sun::java2d::loops::CompositeType>>(); }
	static jni::ref<sun::java2d::loops::CompositeType> Xor() { return get_static_field<"Xor", jni::ref<sun::java2d::loops::CompositeType>>(); }
	static jni::ref<sun::java2d::loops::CompositeType> Clear() { return get_static_field<"Clear", jni::ref<sun::java2d::loops::CompositeType>>(); }
	static jni::ref<sun::java2d::loops::CompositeType> Src() { return get_static_field<"Src", jni::ref<sun::java2d::loops::CompositeType>>(); }
	static jni::ref<sun::java2d::loops::CompositeType> Dst() { return get_static_field<"Dst", jni::ref<sun::java2d::loops::CompositeType>>(); }
	static jni::ref<sun::java2d::loops::CompositeType> SrcOver() { return get_static_field<"SrcOver", jni::ref<sun::java2d::loops::CompositeType>>(); }
	static jni::ref<sun::java2d::loops::CompositeType> DstOver() { return get_static_field<"DstOver", jni::ref<sun::java2d::loops::CompositeType>>(); }
	static jni::ref<sun::java2d::loops::CompositeType> SrcIn() { return get_static_field<"SrcIn", jni::ref<sun::java2d::loops::CompositeType>>(); }
	static jni::ref<sun::java2d::loops::CompositeType> DstIn() { return get_static_field<"DstIn", jni::ref<sun::java2d::loops::CompositeType>>(); }
	static jni::ref<sun::java2d::loops::CompositeType> SrcOut() { return get_static_field<"SrcOut", jni::ref<sun::java2d::loops::CompositeType>>(); }
	static jni::ref<sun::java2d::loops::CompositeType> DstOut() { return get_static_field<"DstOut", jni::ref<sun::java2d::loops::CompositeType>>(); }
	static jni::ref<sun::java2d::loops::CompositeType> SrcAtop() { return get_static_field<"SrcAtop", jni::ref<sun::java2d::loops::CompositeType>>(); }
	static jni::ref<sun::java2d::loops::CompositeType> DstAtop() { return get_static_field<"DstAtop", jni::ref<sun::java2d::loops::CompositeType>>(); }
	static jni::ref<sun::java2d::loops::CompositeType> AlphaXor() { return get_static_field<"AlphaXor", jni::ref<sun::java2d::loops::CompositeType>>(); }
	static jni::ref<sun::java2d::loops::CompositeType> SrcNoEa() { return get_static_field<"SrcNoEa", jni::ref<sun::java2d::loops::CompositeType>>(); }
	static jni::ref<sun::java2d::loops::CompositeType> SrcOverNoEa() { return get_static_field<"SrcOverNoEa", jni::ref<sun::java2d::loops::CompositeType>>(); }
	static jni::ref<sun::java2d::loops::CompositeType> OpaqueSrcOverNoEa() { return get_static_field<"OpaqueSrcOverNoEa", jni::ref<sun::java2d::loops::CompositeType>>(); }

	jni::ref<sun::java2d::loops::CompositeType> deriveSubType(jni::ref<java::lang::String> p1) { return call_method<"deriveSubType", jni::ref<sun::java2d::loops::CompositeType>>(p1); }
	static jni::ref<sun::java2d::loops::CompositeType> forAlphaComposite(jni::ref<java::awt::AlphaComposite> p1) { return call_static_method<"forAlphaComposite", jni::ref<sun::java2d::loops::CompositeType>>(p1); }
	static jint makeUniqueID(jni::ref<java::lang::String> p1) { return call_static_method<"makeUniqueID", jint>(p1); }
	jint getUniqueID() { return call_method<"getUniqueID", jint>(); }
	jni::ref<java::lang::String> getDescriptor() { return call_method<"getDescriptor", jni::ref<java::lang::String>>(); }
	jni::ref<sun::java2d::loops::CompositeType> getSuperType() { return call_method<"getSuperType", jni::ref<sun::java2d::loops::CompositeType>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean isDerivedFrom(jni::ref<sun::java2d::loops::CompositeType> p1) { return call_method<"isDerivedFrom", jboolean>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	CompositeType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_COMPOSITETYPE