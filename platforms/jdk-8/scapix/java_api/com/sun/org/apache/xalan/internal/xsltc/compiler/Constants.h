// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_CONSTANTS_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_CONSTANTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler { class Constants; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/compiler/Constants";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_CONSTANTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_CONSTANTS)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_CONSTANTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ConversionInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::compiler::Constants : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/compiler/Constants",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> ACONST_NULL() { return get_static_field<"ACONST_NULL", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> ATHROW() { return get_static_field<"ATHROW", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> DCMPG() { return get_static_field<"DCMPG", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> DCONST_0() { return get_static_field<"DCONST_0", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> ICONST_0() { return get_static_field<"ICONST_0", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> ICONST_1() { return get_static_field<"ICONST_1", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> NOP() { return get_static_field<"NOP", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::StackInstruction> DUP() { return get_static_field<"DUP", jni::ref<com::sun::org::apache::bcel::internal::generic::StackInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::StackInstruction> DUP2() { return get_static_field<"DUP2", jni::ref<com::sun::org::apache::bcel::internal::generic::StackInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::StackInstruction> DUP_X1() { return get_static_field<"DUP_X1", jni::ref<com::sun::org::apache::bcel::internal::generic::StackInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::StackInstruction> DUP_X2() { return get_static_field<"DUP_X2", jni::ref<com::sun::org::apache::bcel::internal::generic::StackInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::StackInstruction> POP() { return get_static_field<"POP", jni::ref<com::sun::org::apache::bcel::internal::generic::StackInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::StackInstruction> POP2() { return get_static_field<"POP2", jni::ref<com::sun::org::apache::bcel::internal::generic::StackInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::StackInstruction> SWAP() { return get_static_field<"SWAP", jni::ref<com::sun::org::apache::bcel::internal::generic::StackInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction> ALOAD_0() { return get_static_field<"ALOAD_0", jni::ref<com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction> ALOAD_1() { return get_static_field<"ALOAD_1", jni::ref<com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction> ALOAD_2() { return get_static_field<"ALOAD_2", jni::ref<com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction> ILOAD_1() { return get_static_field<"ILOAD_1", jni::ref<com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction> ILOAD_2() { return get_static_field<"ILOAD_2", jni::ref<com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction> DADD() { return get_static_field<"DADD", jni::ref<com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction> IXOR() { return get_static_field<"IXOR", jni::ref<com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ArrayInstruction> AASTORE() { return get_static_field<"AASTORE", jni::ref<com::sun::org::apache::bcel::internal::generic::ArrayInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ArrayInstruction> IASTORE() { return get_static_field<"IASTORE", jni::ref<com::sun::org::apache::bcel::internal::generic::ArrayInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction> D2F() { return get_static_field<"D2F", jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction> D2I() { return get_static_field<"D2I", jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction> D2L() { return get_static_field<"D2L", jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction> F2D() { return get_static_field<"F2D", jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction> I2B() { return get_static_field<"I2B", jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction> I2C() { return get_static_field<"I2C", jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction> I2D() { return get_static_field<"I2D", jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction> I2F() { return get_static_field<"I2F", jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction> I2L() { return get_static_field<"I2L", jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction> I2S() { return get_static_field<"I2S", jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction> L2D() { return get_static_field<"L2D", jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction> L2I() { return get_static_field<"L2I", jni::ref<com::sun::org::apache::bcel::internal::generic::ConversionInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ReturnInstruction> ARETURN() { return get_static_field<"ARETURN", jni::ref<com::sun::org::apache::bcel::internal::generic::ReturnInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ReturnInstruction> IRETURN() { return get_static_field<"IRETURN", jni::ref<com::sun::org::apache::bcel::internal::generic::ReturnInstruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ReturnInstruction> RETURN() { return get_static_field<"RETURN", jni::ref<com::sun::org::apache::bcel::internal::generic::ReturnInstruction>>(); }
	static jint INTERNAL() { return get_static_field<"INTERNAL", jint>(); }
	static jint UNSUPPORTED() { return get_static_field<"UNSUPPORTED", jint>(); }
	static jint FATAL() { return get_static_field<"FATAL", jint>(); }
	static jint ERROR() { return get_static_field<"ERROR", jint>(); }
	static jint WARNING() { return get_static_field<"WARNING", jint>(); }
	static jni::ref<java::lang::String> EMPTYSTRING() { return get_static_field<"EMPTYSTRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAMESPACE_FEATURE() { return get_static_field<"NAMESPACE_FEATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TRANSLET_INTF() { return get_static_field<"TRANSLET_INTF", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TRANSLET_INTF_SIG() { return get_static_field<"TRANSLET_INTF_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTRIBUTES_SIG() { return get_static_field<"ATTRIBUTES_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NODE_ITERATOR_SIG() { return get_static_field<"NODE_ITERATOR_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_INTF_SIG() { return get_static_field<"DOM_INTF_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_IMPL_CLASS() { return get_static_field<"DOM_IMPL_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SAX_IMPL_CLASS() { return get_static_field<"SAX_IMPL_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_IMPL_SIG() { return get_static_field<"DOM_IMPL_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SAX_IMPL_SIG() { return get_static_field<"SAX_IMPL_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_ADAPTER_CLASS() { return get_static_field<"DOM_ADAPTER_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_ADAPTER_SIG() { return get_static_field<"DOM_ADAPTER_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MULTI_DOM_CLASS() { return get_static_field<"MULTI_DOM_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MULTI_DOM_SIG() { return get_static_field<"MULTI_DOM_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING() { return get_static_field<"STRING", jni::ref<java::lang::String>>(); }
	static jint ACC_PUBLIC() { return get_static_field<"ACC_PUBLIC", jint>(); }
	static jint ACC_SUPER() { return get_static_field<"ACC_SUPER", jint>(); }
	static jint ACC_FINAL() { return get_static_field<"ACC_FINAL", jint>(); }
	static jint ACC_PRIVATE() { return get_static_field<"ACC_PRIVATE", jint>(); }
	static jint ACC_PROTECTED() { return get_static_field<"ACC_PROTECTED", jint>(); }
	static jint ACC_STATIC() { return get_static_field<"ACC_STATIC", jint>(); }
	static jni::ref<java::lang::String> STRING_SIG() { return get_static_field<"STRING_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_BUFFER_SIG() { return get_static_field<"STRING_BUFFER_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> OBJECT_SIG() { return get_static_field<"OBJECT_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOUBLE_SIG() { return get_static_field<"DOUBLE_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INTEGER_SIG() { return get_static_field<"INTEGER_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLLATOR_CLASS() { return get_static_field<"COLLATOR_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLLATOR_SIG() { return get_static_field<"COLLATOR_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NODE() { return get_static_field<"NODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NODE_ITERATOR() { return get_static_field<"NODE_ITERATOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NODE_ITERATOR_BASE() { return get_static_field<"NODE_ITERATOR_BASE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SORT_ITERATOR() { return get_static_field<"SORT_ITERATOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SORT_ITERATOR_SIG() { return get_static_field<"SORT_ITERATOR_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NODE_SORT_RECORD() { return get_static_field<"NODE_SORT_RECORD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NODE_SORT_FACTORY() { return get_static_field<"NODE_SORT_FACTORY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NODE_SORT_RECORD_SIG() { return get_static_field<"NODE_SORT_RECORD_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NODE_SORT_FACTORY_SIG() { return get_static_field<"NODE_SORT_FACTORY_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LOCALE_CLASS() { return get_static_field<"LOCALE_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LOCALE_SIG() { return get_static_field<"LOCALE_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_VALUE_HANDLER() { return get_static_field<"STRING_VALUE_HANDLER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_VALUE_HANDLER_SIG() { return get_static_field<"STRING_VALUE_HANDLER_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> OUTPUT_HANDLER() { return get_static_field<"OUTPUT_HANDLER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> OUTPUT_HANDLER_SIG() { return get_static_field<"OUTPUT_HANDLER_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FILTER_INTERFACE() { return get_static_field<"FILTER_INTERFACE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FILTER_INTERFACE_SIG() { return get_static_field<"FILTER_INTERFACE_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> UNION_ITERATOR_CLASS() { return get_static_field<"UNION_ITERATOR_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STEP_ITERATOR_CLASS() { return get_static_field<"STEP_ITERATOR_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CACHED_NODE_LIST_ITERATOR_CLASS() { return get_static_field<"CACHED_NODE_LIST_ITERATOR_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NTH_ITERATOR_CLASS() { return get_static_field<"NTH_ITERATOR_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ABSOLUTE_ITERATOR() { return get_static_field<"ABSOLUTE_ITERATOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DUP_FILTERED_ITERATOR() { return get_static_field<"DUP_FILTERED_ITERATOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CURRENT_NODE_LIST_ITERATOR() { return get_static_field<"CURRENT_NODE_LIST_ITERATOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CURRENT_NODE_LIST_FILTER() { return get_static_field<"CURRENT_NODE_LIST_FILTER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CURRENT_NODE_LIST_ITERATOR_SIG() { return get_static_field<"CURRENT_NODE_LIST_ITERATOR_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CURRENT_NODE_LIST_FILTER_SIG() { return get_static_field<"CURRENT_NODE_LIST_FILTER_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FILTER_STEP_ITERATOR() { return get_static_field<"FILTER_STEP_ITERATOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FILTER_ITERATOR() { return get_static_field<"FILTER_ITERATOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SINGLETON_ITERATOR() { return get_static_field<"SINGLETON_ITERATOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MATCHING_ITERATOR() { return get_static_field<"MATCHING_ITERATOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NODE_SIG() { return get_static_field<"NODE_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_PARENT() { return get_static_field<"GET_PARENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_PARENT_SIG() { return get_static_field<"GET_PARENT_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NEXT_SIG() { return get_static_field<"NEXT_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NEXT() { return get_static_field<"NEXT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NEXTID() { return get_static_field<"NEXTID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MAKE_NODE() { return get_static_field<"MAKE_NODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MAKE_NODE_LIST() { return get_static_field<"MAKE_NODE_LIST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_UNPARSED_ENTITY_URI() { return get_static_field<"GET_UNPARSED_ENTITY_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TO_REAL() { return get_static_field<"STRING_TO_REAL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TO_REAL_SIG() { return get_static_field<"STRING_TO_REAL_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TO_INT() { return get_static_field<"STRING_TO_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_TO_INT_SIG() { return get_static_field<"STRING_TO_INT_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XSLT_PACKAGE() { return get_static_field<"XSLT_PACKAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COMPILER_PACKAGE() { return get_static_field<"COMPILER_PACKAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RUNTIME_PACKAGE() { return get_static_field<"RUNTIME_PACKAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TRANSLET_CLASS() { return get_static_field<"TRANSLET_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TRANSLET_SIG() { return get_static_field<"TRANSLET_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> UNION_ITERATOR_SIG() { return get_static_field<"UNION_ITERATOR_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TRANSLET_OUTPUT_SIG() { return get_static_field<"TRANSLET_OUTPUT_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MAKE_NODE_SIG() { return get_static_field<"MAKE_NODE_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MAKE_NODE_SIG2() { return get_static_field<"MAKE_NODE_SIG2", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MAKE_NODE_LIST_SIG() { return get_static_field<"MAKE_NODE_LIST_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MAKE_NODE_LIST_SIG2() { return get_static_field<"MAKE_NODE_LIST_SIG2", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STREAM_XML_OUTPUT() { return get_static_field<"STREAM_XML_OUTPUT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> OUTPUT_BASE() { return get_static_field<"OUTPUT_BASE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LOAD_DOCUMENT_CLASS() { return get_static_field<"LOAD_DOCUMENT_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_INDEX_CLASS() { return get_static_field<"KEY_INDEX_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_INDEX_SIG() { return get_static_field<"KEY_INDEX_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_INDEX_ITERATOR_SIG() { return get_static_field<"KEY_INDEX_ITERATOR_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_INTF() { return get_static_field<"DOM_INTF", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_IMPL() { return get_static_field<"DOM_IMPL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SAX_IMPL() { return get_static_field<"SAX_IMPL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_CLASS() { return get_static_field<"STRING_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> OBJECT_CLASS() { return get_static_field<"OBJECT_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BOOLEAN_CLASS() { return get_static_field<"BOOLEAN_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_BUFFER_CLASS() { return get_static_field<"STRING_BUFFER_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRING_WRITER() { return get_static_field<"STRING_WRITER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WRITER_SIG() { return get_static_field<"WRITER_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TRANSLET_OUTPUT_BASE() { return get_static_field<"TRANSLET_OUTPUT_BASE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TRANSLET_OUTPUT_INTERFACE() { return get_static_field<"TRANSLET_OUTPUT_INTERFACE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BASIS_LIBRARY_CLASS() { return get_static_field<"BASIS_LIBRARY_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTRIBUTE_LIST_IMPL_CLASS() { return get_static_field<"ATTRIBUTE_LIST_IMPL_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOUBLE_CLASS() { return get_static_field<"DOUBLE_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INTEGER_CLASS() { return get_static_field<"INTEGER_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RUNTIME_NODE_CLASS() { return get_static_field<"RUNTIME_NODE_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MATH_CLASS() { return get_static_field<"MATH_CLASS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BOOLEAN_VALUE() { return get_static_field<"BOOLEAN_VALUE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BOOLEAN_VALUE_SIG() { return get_static_field<"BOOLEAN_VALUE_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INT_VALUE() { return get_static_field<"INT_VALUE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INT_VALUE_SIG() { return get_static_field<"INT_VALUE_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOUBLE_VALUE() { return get_static_field<"DOUBLE_VALUE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOUBLE_VALUE_SIG() { return get_static_field<"DOUBLE_VALUE_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_PNAME() { return get_static_field<"DOM_PNAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NODE_PNAME() { return get_static_field<"NODE_PNAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TRANSLET_OUTPUT_PNAME() { return get_static_field<"TRANSLET_OUTPUT_PNAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ITERATOR_PNAME() { return get_static_field<"ITERATOR_PNAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOCUMENT_PNAME() { return get_static_field<"DOCUMENT_PNAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TRANSLET_PNAME() { return get_static_field<"TRANSLET_PNAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INVOKE_METHOD() { return get_static_field<"INVOKE_METHOD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_NODE_NAME() { return get_static_field<"GET_NODE_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CHARACTERSW() { return get_static_field<"CHARACTERSW", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_CHILDREN() { return get_static_field<"GET_CHILDREN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_TYPED_CHILDREN() { return get_static_field<"GET_TYPED_CHILDREN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CHARACTERS() { return get_static_field<"CHARACTERS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> APPLY_TEMPLATES() { return get_static_field<"APPLY_TEMPLATES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_NODE_TYPE() { return get_static_field<"GET_NODE_TYPE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_NODE_VALUE() { return get_static_field<"GET_NODE_VALUE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_ELEMENT_VALUE() { return get_static_field<"GET_ELEMENT_VALUE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_ATTRIBUTE_VALUE() { return get_static_field<"GET_ATTRIBUTE_VALUE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HAS_ATTRIBUTE() { return get_static_field<"HAS_ATTRIBUTE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ADD_ITERATOR() { return get_static_field<"ADD_ITERATOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SET_START_NODE() { return get_static_field<"SET_START_NODE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RESET() { return get_static_field<"RESET", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTR_SET_SIG() { return get_static_field<"ATTR_SET_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_NODE_NAME_SIG() { return get_static_field<"GET_NODE_NAME_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CHARACTERSW_SIG() { return get_static_field<"CHARACTERSW_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CHARACTERS_SIG() { return get_static_field<"CHARACTERS_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_CHILDREN_SIG() { return get_static_field<"GET_CHILDREN_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_TYPED_CHILDREN_SIG() { return get_static_field<"GET_TYPED_CHILDREN_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_NODE_TYPE_SIG() { return get_static_field<"GET_NODE_TYPE_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_NODE_VALUE_SIG() { return get_static_field<"GET_NODE_VALUE_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_ELEMENT_VALUE_SIG() { return get_static_field<"GET_ELEMENT_VALUE_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_ATTRIBUTE_VALUE_SIG() { return get_static_field<"GET_ATTRIBUTE_VALUE_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HAS_ATTRIBUTE_SIG() { return get_static_field<"HAS_ATTRIBUTE_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_ITERATOR_SIG() { return get_static_field<"GET_ITERATOR_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAMES_INDEX() { return get_static_field<"NAMES_INDEX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAMES_INDEX_SIG() { return get_static_field<"NAMES_INDEX_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> URIS_INDEX() { return get_static_field<"URIS_INDEX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> URIS_INDEX_SIG() { return get_static_field<"URIS_INDEX_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TYPES_INDEX() { return get_static_field<"TYPES_INDEX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TYPES_INDEX_SIG() { return get_static_field<"TYPES_INDEX_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAMESPACE_INDEX() { return get_static_field<"NAMESPACE_INDEX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAMESPACE_INDEX_SIG() { return get_static_field<"NAMESPACE_INDEX_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HASIDCALL_INDEX() { return get_static_field<"HASIDCALL_INDEX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HASIDCALL_INDEX_SIG() { return get_static_field<"HASIDCALL_INDEX_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TRANSLET_VERSION_INDEX() { return get_static_field<"TRANSLET_VERSION_INDEX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TRANSLET_VERSION_INDEX_SIG() { return get_static_field<"TRANSLET_VERSION_INDEX_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DOM_FIELD() { return get_static_field<"DOM_FIELD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STATIC_NAMES_ARRAY_FIELD() { return get_static_field<"STATIC_NAMES_ARRAY_FIELD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STATIC_URIS_ARRAY_FIELD() { return get_static_field<"STATIC_URIS_ARRAY_FIELD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STATIC_TYPES_ARRAY_FIELD() { return get_static_field<"STATIC_TYPES_ARRAY_FIELD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STATIC_NAMESPACE_ARRAY_FIELD() { return get_static_field<"STATIC_NAMESPACE_ARRAY_FIELD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STATIC_CHAR_DATA_FIELD() { return get_static_field<"STATIC_CHAR_DATA_FIELD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STATIC_CHAR_DATA_FIELD_SIG() { return get_static_field<"STATIC_CHAR_DATA_FIELD_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FORMAT_SYMBOLS_FIELD() { return get_static_field<"FORMAT_SYMBOLS_FIELD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ITERATOR_FIELD_SIG() { return get_static_field<"ITERATOR_FIELD_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NODE_FIELD() { return get_static_field<"NODE_FIELD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NODE_FIELD_SIG() { return get_static_field<"NODE_FIELD_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EMPTYATTR_FIELD() { return get_static_field<"EMPTYATTR_FIELD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTRIBUTE_LIST_FIELD() { return get_static_field<"ATTRIBUTE_LIST_FIELD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CLEAR_ATTRIBUTES() { return get_static_field<"CLEAR_ATTRIBUTES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ADD_ATTRIBUTE() { return get_static_field<"ADD_ATTRIBUTE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ATTRIBUTE_LIST_IMPL_SIG() { return get_static_field<"ATTRIBUTE_LIST_IMPL_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CLEAR_ATTRIBUTES_SIG() { return get_static_field<"CLEAR_ATTRIBUTES_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ADD_ATTRIBUTE_SIG() { return get_static_field<"ADD_ATTRIBUTE_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ADD_ITERATOR_SIG() { return get_static_field<"ADD_ITERATOR_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ORDER_ITERATOR() { return get_static_field<"ORDER_ITERATOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ORDER_ITERATOR_SIG() { return get_static_field<"ORDER_ITERATOR_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SET_START_NODE_SIG() { return get_static_field<"SET_START_NODE_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NODE_COUNTER() { return get_static_field<"NODE_COUNTER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NODE_COUNTER_SIG() { return get_static_field<"NODE_COUNTER_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DEFAULT_NODE_COUNTER() { return get_static_field<"DEFAULT_NODE_COUNTER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DEFAULT_NODE_COUNTER_SIG() { return get_static_field<"DEFAULT_NODE_COUNTER_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TRANSLET_FIELD() { return get_static_field<"TRANSLET_FIELD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TRANSLET_FIELD_SIG() { return get_static_field<"TRANSLET_FIELD_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RESET_SIG() { return get_static_field<"RESET_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_PARAMETER() { return get_static_field<"GET_PARAMETER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ADD_PARAMETER() { return get_static_field<"ADD_PARAMETER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PUSH_PARAM_FRAME() { return get_static_field<"PUSH_PARAM_FRAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PUSH_PARAM_FRAME_SIG() { return get_static_field<"PUSH_PARAM_FRAME_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> POP_PARAM_FRAME() { return get_static_field<"POP_PARAM_FRAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> POP_PARAM_FRAME_SIG() { return get_static_field<"POP_PARAM_FRAME_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_PARAMETER_SIG() { return get_static_field<"GET_PARAMETER_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ADD_PARAMETER_SIG() { return get_static_field<"ADD_PARAMETER_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRIP_SPACE() { return get_static_field<"STRIP_SPACE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRIP_SPACE_INTF() { return get_static_field<"STRIP_SPACE_INTF", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRIP_SPACE_SIG() { return get_static_field<"STRIP_SPACE_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STRIP_SPACE_PARAMS() { return get_static_field<"STRIP_SPACE_PARAMS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_NODE_VALUE_ITERATOR() { return get_static_field<"GET_NODE_VALUE_ITERATOR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_NODE_VALUE_ITERATOR_SIG() { return get_static_field<"GET_NODE_VALUE_ITERATOR_SIG", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> GET_UNPARSED_ENTITY_URI_SIG() { return get_static_field<"GET_UNPARSED_ENTITY_URI_SIG", jni::ref<java::lang::String>>(); }
	static jint POSITION_INDEX() { return get_static_field<"POSITION_INDEX", jint>(); }
	static jint LAST_INDEX() { return get_static_field<"LAST_INDEX", jint>(); }
	static jni::ref<java::lang::String> XMLNS_PREFIX() { return get_static_field<"XMLNS_PREFIX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XMLNS_STRING() { return get_static_field<"XMLNS_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XMLNS_URI() { return get_static_field<"XMLNS_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XSLT_URI() { return get_static_field<"XSLT_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> XHTML_URI() { return get_static_field<"XHTML_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TRANSLET_URI() { return get_static_field<"TRANSLET_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> REDIRECT_URI() { return get_static_field<"REDIRECT_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FALLBACK_CLASS() { return get_static_field<"FALLBACK_CLASS", jni::ref<java::lang::String>>(); }
	static jint RTF_INITIAL_SIZE() { return get_static_field<"RTF_INITIAL_SIZE", jint>(); }


protected:

	Constants(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_CONSTANTS