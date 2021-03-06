/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageDecomposeFilterWrap.h"
#include "vtkImageEuclideanDistanceWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageEuclideanDistanceWrap::ptpl;

VtkImageEuclideanDistanceWrap::VtkImageEuclideanDistanceWrap()
{ }

VtkImageEuclideanDistanceWrap::VtkImageEuclideanDistanceWrap(vtkSmartPointer<vtkImageEuclideanDistance> _native)
{ native = _native; }

VtkImageEuclideanDistanceWrap::~VtkImageEuclideanDistanceWrap()
{ }

void VtkImageEuclideanDistanceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageEuclideanDistance").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageEuclideanDistance").ToLocalChecked(), ConstructorGetter);
}

void VtkImageEuclideanDistanceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageEuclideanDistanceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageDecomposeFilterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageDecomposeFilterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageEuclideanDistanceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ConsiderAnisotropyOff", ConsiderAnisotropyOff);
	Nan::SetPrototypeMethod(tpl, "considerAnisotropyOff", ConsiderAnisotropyOff);

	Nan::SetPrototypeMethod(tpl, "ConsiderAnisotropyOn", ConsiderAnisotropyOn);
	Nan::SetPrototypeMethod(tpl, "considerAnisotropyOn", ConsiderAnisotropyOn);

	Nan::SetPrototypeMethod(tpl, "GetAlgorithm", GetAlgorithm);
	Nan::SetPrototypeMethod(tpl, "getAlgorithm", GetAlgorithm);

	Nan::SetPrototypeMethod(tpl, "GetConsiderAnisotropy", GetConsiderAnisotropy);
	Nan::SetPrototypeMethod(tpl, "getConsiderAnisotropy", GetConsiderAnisotropy);

	Nan::SetPrototypeMethod(tpl, "GetInitialize", GetInitialize);
	Nan::SetPrototypeMethod(tpl, "getInitialize", GetInitialize);

	Nan::SetPrototypeMethod(tpl, "GetMaximumDistance", GetMaximumDistance);
	Nan::SetPrototypeMethod(tpl, "getMaximumDistance", GetMaximumDistance);

	Nan::SetPrototypeMethod(tpl, "InitializeOff", InitializeOff);
	Nan::SetPrototypeMethod(tpl, "initializeOff", InitializeOff);

	Nan::SetPrototypeMethod(tpl, "InitializeOn", InitializeOn);
	Nan::SetPrototypeMethod(tpl, "initializeOn", InitializeOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAlgorithm", SetAlgorithm);
	Nan::SetPrototypeMethod(tpl, "setAlgorithm", SetAlgorithm);

	Nan::SetPrototypeMethod(tpl, "SetAlgorithmToSaito", SetAlgorithmToSaito);
	Nan::SetPrototypeMethod(tpl, "setAlgorithmToSaito", SetAlgorithmToSaito);

	Nan::SetPrototypeMethod(tpl, "SetAlgorithmToSaitoCached", SetAlgorithmToSaitoCached);
	Nan::SetPrototypeMethod(tpl, "setAlgorithmToSaitoCached", SetAlgorithmToSaitoCached);

	Nan::SetPrototypeMethod(tpl, "SetConsiderAnisotropy", SetConsiderAnisotropy);
	Nan::SetPrototypeMethod(tpl, "setConsiderAnisotropy", SetConsiderAnisotropy);

	Nan::SetPrototypeMethod(tpl, "SetInitialize", SetInitialize);
	Nan::SetPrototypeMethod(tpl, "setInitialize", SetInitialize);

	Nan::SetPrototypeMethod(tpl, "SetMaximumDistance", SetMaximumDistance);
	Nan::SetPrototypeMethod(tpl, "setMaximumDistance", SetMaximumDistance);

#ifdef VTK_NODE_PLUS_VTKIMAGEEUCLIDEANDISTANCEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKIMAGEEUCLIDEANDISTANCEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkImageEuclideanDistanceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageEuclideanDistance> native = vtkSmartPointer<vtkImageEuclideanDistance>::New();
		VtkImageEuclideanDistanceWrap* obj = new VtkImageEuclideanDistanceWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageEuclideanDistanceWrap::ConsiderAnisotropyOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEuclideanDistanceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEuclideanDistanceWrap>(info.Holder());
	vtkImageEuclideanDistance *native = (vtkImageEuclideanDistance *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ConsiderAnisotropyOff();
}

void VtkImageEuclideanDistanceWrap::ConsiderAnisotropyOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEuclideanDistanceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEuclideanDistanceWrap>(info.Holder());
	vtkImageEuclideanDistance *native = (vtkImageEuclideanDistance *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ConsiderAnisotropyOn();
}

void VtkImageEuclideanDistanceWrap::GetAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEuclideanDistanceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEuclideanDistanceWrap>(info.Holder());
	vtkImageEuclideanDistance *native = (vtkImageEuclideanDistance *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAlgorithm();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageEuclideanDistanceWrap::GetConsiderAnisotropy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEuclideanDistanceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEuclideanDistanceWrap>(info.Holder());
	vtkImageEuclideanDistance *native = (vtkImageEuclideanDistance *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetConsiderAnisotropy();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageEuclideanDistanceWrap::GetInitialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEuclideanDistanceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEuclideanDistanceWrap>(info.Holder());
	vtkImageEuclideanDistance *native = (vtkImageEuclideanDistance *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInitialize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageEuclideanDistanceWrap::GetMaximumDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEuclideanDistanceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEuclideanDistanceWrap>(info.Holder());
	vtkImageEuclideanDistance *native = (vtkImageEuclideanDistance *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageEuclideanDistanceWrap::InitializeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEuclideanDistanceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEuclideanDistanceWrap>(info.Holder());
	vtkImageEuclideanDistance *native = (vtkImageEuclideanDistance *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitializeOff();
}

void VtkImageEuclideanDistanceWrap::InitializeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEuclideanDistanceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEuclideanDistanceWrap>(info.Holder());
	vtkImageEuclideanDistance *native = (vtkImageEuclideanDistance *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitializeOn();
}

void VtkImageEuclideanDistanceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEuclideanDistanceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEuclideanDistanceWrap>(info.Holder());
	vtkImageEuclideanDistance *native = (vtkImageEuclideanDistance *)wrapper->native.GetPointer();
	vtkImageEuclideanDistance * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageEuclideanDistanceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageEuclideanDistanceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageEuclideanDistanceWrap *w = new VtkImageEuclideanDistanceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageEuclideanDistanceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEuclideanDistanceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEuclideanDistanceWrap>(info.Holder());
	vtkImageEuclideanDistance *native = (vtkImageEuclideanDistance *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkImageEuclideanDistance * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkImageEuclideanDistanceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageEuclideanDistanceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageEuclideanDistanceWrap *w = new VtkImageEuclideanDistanceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageEuclideanDistanceWrap::SetAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEuclideanDistanceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEuclideanDistanceWrap>(info.Holder());
	vtkImageEuclideanDistance *native = (vtkImageEuclideanDistance *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAlgorithm(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageEuclideanDistanceWrap::SetAlgorithmToSaito(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEuclideanDistanceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEuclideanDistanceWrap>(info.Holder());
	vtkImageEuclideanDistance *native = (vtkImageEuclideanDistance *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAlgorithmToSaito();
}

void VtkImageEuclideanDistanceWrap::SetAlgorithmToSaitoCached(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEuclideanDistanceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEuclideanDistanceWrap>(info.Holder());
	vtkImageEuclideanDistance *native = (vtkImageEuclideanDistance *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAlgorithmToSaitoCached();
}

void VtkImageEuclideanDistanceWrap::SetConsiderAnisotropy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEuclideanDistanceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEuclideanDistanceWrap>(info.Holder());
	vtkImageEuclideanDistance *native = (vtkImageEuclideanDistance *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetConsiderAnisotropy(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageEuclideanDistanceWrap::SetInitialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEuclideanDistanceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEuclideanDistanceWrap>(info.Holder());
	vtkImageEuclideanDistance *native = (vtkImageEuclideanDistance *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInitialize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageEuclideanDistanceWrap::SetMaximumDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEuclideanDistanceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEuclideanDistanceWrap>(info.Holder());
	vtkImageEuclideanDistance *native = (vtkImageEuclideanDistance *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumDistance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

