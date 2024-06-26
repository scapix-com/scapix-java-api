// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Externalizable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_BITARRAY_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_BITARRAY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom { class BitArray; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom::BitArray>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/dom/BitArray";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Externalizable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_BITARRAY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_BITARRAY)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_BITARRAY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/ObjectInput.h>
#include <scapix/java_api/java/io/ObjectOutput.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::dom::BitArray : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/dom/BitArray",
	java::lang::Object,
	java::io::Externalizable>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::BitArray> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::BitArray> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::BitArray> new_object(jint p1, jni::ref<jni::array<jint>> p2) { return base_::new_object(p1, p2); }
	void setMask(jint p1) { return call_method<"setMask", void>(p1); }
	jint getMask() { return call_method<"getMask", jint>(); }
	jint size() { return call_method<"size", jint>(); }
	jboolean getBit(jint p1) { return call_method<"getBit", jboolean>(p1); }
	jint getNextBit(jint p1) { return call_method<"getNextBit", jint>(p1); }
	jint getBitNumber(jint p1) { return call_method<"getBitNumber", jint>(p1); }
	jni::ref<jni::array<jint>> data() { return call_method<"data", jni::ref<jni::array<jint>>>(); }
	void setBit(jint p1) { return call_method<"setBit", void>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::BitArray> merge(jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::BitArray> p1) { return call_method<"merge", jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::BitArray>>(p1); }
	void resize(jint p1) { return call_method<"resize", void>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::BitArray> cloneArray() { return call_method<"cloneArray", jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::BitArray>>(); }
	void writeExternal(jni::ref<java::io::ObjectOutput> p1) { return call_method<"writeExternal", void>(p1); }
	void readExternal(jni::ref<java::io::ObjectInput> p1) { return call_method<"readExternal", void>(p1); }

protected:

	BitArray(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_BITARRAY
