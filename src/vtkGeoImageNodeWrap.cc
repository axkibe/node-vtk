/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkGeoTreeNodeWrap.h"
#include "vtkGeoImageNodeWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkTextureWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGeoImageNodeWrap::ptpl;

VtkGeoImageNodeWrap::VtkGeoImageNodeWrap()
{ }

VtkGeoImageNodeWrap::VtkGeoImageNodeWrap(vtkSmartPointer<vtkGeoImageNode> _native)
{ native = _native; }

VtkGeoImageNodeWrap::~VtkGeoImageNodeWrap()
{ }

void VtkGeoImageNodeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGeoImageNode").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GeoImageNode").ToLocalChecked(), ConstructorGetter);
}

void VtkGeoImageNodeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGeoImageNodeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGeoTreeNodeWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGeoTreeNodeWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGeoImageNodeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "DeleteData", DeleteData);
	Nan::SetPrototypeMethod(tpl, "deleteData", DeleteData);

	Nan::SetPrototypeMethod(tpl, "GetChild", GetChild);
	Nan::SetPrototypeMethod(tpl, "getChild", GetChild);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetImage", GetImage);
	Nan::SetPrototypeMethod(tpl, "getImage", GetImage);

	Nan::SetPrototypeMethod(tpl, "GetParent", GetParent);
	Nan::SetPrototypeMethod(tpl, "getParent", GetParent);

	Nan::SetPrototypeMethod(tpl, "GetTexture", GetTexture);
	Nan::SetPrototypeMethod(tpl, "getTexture", GetTexture);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LoadAnImage", LoadAnImage);
	Nan::SetPrototypeMethod(tpl, "loadAnImage", LoadAnImage);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetImage", SetImage);
	Nan::SetPrototypeMethod(tpl, "setImage", SetImage);

	Nan::SetPrototypeMethod(tpl, "SetTexture", SetTexture);
	Nan::SetPrototypeMethod(tpl, "setTexture", SetTexture);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkGeoImageNodeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGeoImageNode> native = vtkSmartPointer<vtkGeoImageNode>::New();
		VtkGeoImageNodeWrap* obj = new VtkGeoImageNodeWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGeoImageNodeWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoImageNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoImageNodeWrap>(info.Holder());
	vtkGeoImageNode *native = (vtkGeoImageNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGeoTreeNodeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGeoTreeNodeWrap *a0 = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkGeoTreeNode *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoImageNodeWrap::DeleteData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoImageNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoImageNodeWrap>(info.Holder());
	vtkGeoImageNode *native = (vtkGeoImageNode *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DeleteData();
}

void VtkGeoImageNodeWrap::GetChild(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoImageNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoImageNodeWrap>(info.Holder());
	vtkGeoImageNode *native = (vtkGeoImageNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkGeoImageNode * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetChild(
			info[0]->Int32Value()
		);
			VtkGeoImageNodeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGeoImageNodeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGeoImageNodeWrap *w = new VtkGeoImageNodeWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoImageNodeWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoImageNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoImageNodeWrap>(info.Holder());
	vtkGeoImageNode *native = (vtkGeoImageNode *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGeoImageNodeWrap::GetImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoImageNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoImageNodeWrap>(info.Holder());
	vtkGeoImageNode *native = (vtkGeoImageNode *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImage();
		VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoImageNodeWrap::GetParent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoImageNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoImageNodeWrap>(info.Holder());
	vtkGeoImageNode *native = (vtkGeoImageNode *)wrapper->native.GetPointer();
	vtkGeoImageNode * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetParent();
		VtkGeoImageNodeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGeoImageNodeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoImageNodeWrap *w = new VtkGeoImageNodeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoImageNodeWrap::GetTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoImageNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoImageNodeWrap>(info.Holder());
	vtkGeoImageNode *native = (vtkGeoImageNode *)wrapper->native.GetPointer();
	vtkTexture * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTexture();
		VtkTextureWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextureWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextureWrap *w = new VtkTextureWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoImageNodeWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoImageNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoImageNodeWrap>(info.Holder());
	vtkGeoImageNode *native = (vtkGeoImageNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoImageNodeWrap::LoadAnImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoImageNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoImageNodeWrap>(info.Holder());
	vtkGeoImageNode *native = (vtkGeoImageNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->LoadAnImage(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoImageNodeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoImageNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoImageNodeWrap>(info.Holder());
	vtkGeoImageNode *native = (vtkGeoImageNode *)wrapper->native.GetPointer();
	vtkGeoImageNode * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGeoImageNodeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGeoImageNodeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoImageNodeWrap *w = new VtkGeoImageNodeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoImageNodeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoImageNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoImageNodeWrap>(info.Holder());
	vtkGeoImageNode *native = (vtkGeoImageNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGeoImageNode * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGeoImageNodeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGeoImageNodeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGeoImageNodeWrap *w = new VtkGeoImageNodeWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoImageNodeWrap::SetImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoImageNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoImageNodeWrap>(info.Holder());
	vtkGeoImageNode *native = (vtkGeoImageNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetImage(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoImageNodeWrap::SetTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoImageNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoImageNodeWrap>(info.Holder());
	vtkGeoImageNode *native = (vtkGeoImageNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextureWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextureWrap *a0 = ObjectWrap::Unwrap<VtkTextureWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTexture(
			(vtkTexture *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoImageNodeWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoImageNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoImageNodeWrap>(info.Holder());
	vtkGeoImageNode *native = (vtkGeoImageNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGeoTreeNodeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGeoTreeNodeWrap *a0 = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkGeoTreeNode *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

