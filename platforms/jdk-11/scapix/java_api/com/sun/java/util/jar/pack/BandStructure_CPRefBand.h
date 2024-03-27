// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/java/util/jar/pack/BandStructure_ValueBand.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_CPREFBAND_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_CPREFBAND_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class BandStructure_CPRefBand; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::BandStructure_CPRefBand>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/BandStructure$CPRefBand";
	using base_classes = std::tuple<scapix::java_api::com::sun::java::util::jar::pack::BandStructure_ValueBand>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_CPREFBAND_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_CPREFBAND)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_CPREFBAND

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/java/util/jar/pack/BandStructure.h>
#include <scapix/java_api/com/sun/java/util/jar/pack/Coding.h>
#include <scapix/java_api/com/sun/java/util/jar/pack/ConstantPool_Entry.h>
#include <scapix/java_api/com/sun/java/util/jar/pack/ConstantPool_Index.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::util::jar::pack::BandStructure_CPRefBand : public jni::object_base<"com/sun/java/util/jar/pack/BandStructure$CPRefBand",
	com::sun::java::util::jar::pack::BandStructure_ValueBand>
{
public:

	static jni::ref<com::sun::java::util::jar::pack::BandStructure_CPRefBand> new_object(jni::ref<com::sun::java::util::jar::pack::BandStructure> this_0, jni::ref<java::lang::String> name, jni::ref<com::sun::java::util::jar::pack::Coding> regularCoding, jbyte cpTag, jboolean nullOK) { return base_::new_object(this_0, name, regularCoding, cpTag, nullOK); }
	static jni::ref<com::sun::java::util::jar::pack::BandStructure_CPRefBand> new_object(jni::ref<com::sun::java::util::jar::pack::BandStructure> this_0, jni::ref<java::lang::String> name, jni::ref<com::sun::java::util::jar::pack::Coding> regularCoding, jbyte cpTag) { return base_::new_object(this_0, name, regularCoding, cpTag); }
	static jni::ref<com::sun::java::util::jar::pack::BandStructure_CPRefBand> new_object(jni::ref<com::sun::java::util::jar::pack::BandStructure> this_0, jni::ref<java::lang::String> name, jni::ref<com::sun::java::util::jar::pack::Coding> regularCoding, jni::ref<java::lang::Object> undef) { return base_::new_object(this_0, name, regularCoding, undef); }
	void setIndex(jni::ref<com::sun::java::util::jar::pack::ConstantPool_Index> index) { return call_method<"setIndex", void>(index); }
	void putRef(jni::ref<com::sun::java::util::jar::pack::ConstantPool_Entry> e) { return call_method<"putRef", void>(e); }
	void putRef(jni::ref<com::sun::java::util::jar::pack::ConstantPool_Entry> e, jni::ref<com::sun::java::util::jar::pack::ConstantPool_Index> index) { return call_method<"putRef", void>(e, index); }
	void putRef(jni::ref<com::sun::java::util::jar::pack::ConstantPool_Entry> e, jbyte cptag) { return call_method<"putRef", void>(e, cptag); }
	jni::ref<com::sun::java::util::jar::pack::ConstantPool_Entry> getRef() { return call_method<"getRef", jni::ref<com::sun::java::util::jar::pack::ConstantPool_Entry>>(); }
	jni::ref<com::sun::java::util::jar::pack::ConstantPool_Entry> getRef(jni::ref<com::sun::java::util::jar::pack::ConstantPool_Index> index) { return call_method<"getRef", jni::ref<com::sun::java::util::jar::pack::ConstantPool_Entry>>(index); }
	jni::ref<com::sun::java::util::jar::pack::ConstantPool_Entry> getRef(jbyte cptag) { return call_method<"getRef", jni::ref<com::sun::java::util::jar::pack::ConstantPool_Entry>>(cptag); }

protected:

	BandStructure_CPRefBand(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_CPREFBAND