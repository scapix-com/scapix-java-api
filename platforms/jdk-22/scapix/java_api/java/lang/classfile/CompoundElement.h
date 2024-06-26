// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/ClassFileElement.h>
#include <scapix/java_api/java/lang/Iterable.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_COMPOUNDELEMENT_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_COMPOUNDELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile { class CompoundElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::CompoundElement>
{
	static constexpr fixed_string class_name = "java/lang/classfile/CompoundElement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::ClassFileElement, scapix::java_api::java::lang::Iterable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_COMPOUNDELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_COMPOUNDELEMENT)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_COMPOUNDELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::CompoundElement : public jni::object_base<"java/lang/classfile/CompoundElement",
	java::lang::Object,
	java::lang::classfile::ClassFileElement,
	java::lang::Iterable>
{
public:

	void forEachElement(jni::ref<java::util::function::Consumer> p1) { return call_method<"forEachElement", void>(p1); }
	jni::ref<java::lang::Iterable> elements() { return call_method<"elements", jni::ref<java::lang::Iterable>>(); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::util::stream::Stream> elementStream() { return call_method<"elementStream", jni::ref<java::util::stream::Stream>>(); }
	jni::ref<java::util::List> elementList() { return call_method<"elementList", jni::ref<java::util::List>>(); }

protected:

	CompoundElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_COMPOUNDELEMENT
