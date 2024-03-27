// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractList.h>
#include <scapix/java_api/java/util/RandomAccess.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SINGLETONLIST_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SINGLETONLIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Collections_SingletonList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Collections_SingletonList>
{
	static constexpr fixed_string class_name = "java/util/Collections$SingletonList";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractList, scapix::java_api::java::util::RandomAccess, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SINGLETONLIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SINGLETONLIST)
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SINGLETONLIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/Predicate.h>
#include <scapix/java_api/java/util/function/UnaryOperator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Collections_SingletonList : public jni::object_base<"java/util/Collections$SingletonList",
	java::util::AbstractList,
	java::util::RandomAccess,
	java::io::Serializable>
{
public:

	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jint size() { return call_method<"size", jint>(); }
	jboolean contains(jni::ref<java::lang::Object> obj) { return call_method<"contains", jboolean>(obj); }
	jni::ref<java::lang::Object> get(jint index) { return call_method<"get", jni::ref<java::lang::Object>>(index); }
	void forEach(jni::ref<java::util::function::Consumer> action) { return call_method<"forEach", void>(action); }
	jboolean removeIf(jni::ref<java::util::function::Predicate> filter) { return call_method<"removeIf", jboolean>(filter); }
	void replaceAll(jni::ref<java::util::function::UnaryOperator> operator_) { return call_method<"replaceAll", void>(operator_); }
	void sort(jni::ref<java::util::Comparator> c) { return call_method<"sort", void>(c); }
	jni::ref<java::util::Spliterator> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	Collections_SingletonList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_SINGLETONLIST